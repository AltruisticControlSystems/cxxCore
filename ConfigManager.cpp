#include "ConfigManager.hpp"

#include <QDebug>
#include <QFile>
#include <QIODevice>

namespace cxxCore
{
//! init
//!
//! Initialize the ConfigManager
void ConfigManager::init()
{
}

//! deInit
//!
//! De-initialize the ConfigManager
void ConfigManager::deInit()
{
    mConfigHash.clear();
}
//! loadConfigs
//!
//! Loads the configs
bool ConfigManager::loadConfigs
    (
    const QString& aFilePath //!< The path to the config file
    )
{
    QFile configFile(aFilePath);
    bool success = configFile.open(QIODevice::ReadOnly | QIODevice::Text);

    if(success)
    {

    }

    return success;
}

//! getConfig
//!
//! gets the specified config from the hash
QString ConfigManager::getConfig
    (
    const QString& aKey //!< The key to retrieve the config from the hash
    ) const
{
    QHash<QString,QString>::const_iterator valueIter = mConfigHash.find(aKey);

    if(valueIter != mConfigHash.end() && valueIter.key() == aKey)
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

