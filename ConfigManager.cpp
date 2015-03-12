#include "ConfigManager.hpp"

#include <QDebug>
#include <QFile>
#include <QIODevice>

namespace cxxCore
{

    bool ConfigManager::loadConfigs
        (
        const QString& aFilePath
        )
    {
        QFile configFile(aFilePath);
        bool success = configFile.open(QIODevice::ReadOnly | QIODevice::Text);

        if(success)
        {

        }

        return success;
    }

    QString ConfigManager::getConfig
        (
        const QString& aKey
        ) const
    {
        QMap<QString,QString>::const_iterator valueIter = mConfigMap.find(aKey);

        if(valueIter != mConfigMap.end() && valueIter.key() == aKey)
        {
            return valueIter.value();
        }
        else
        {
            qWarning() << "ConfigManager::getConfig(" << aKey.toLatin1() <<") - Invalid Key";

            return QString();
        }
    }

} // Namespace cxxCore

