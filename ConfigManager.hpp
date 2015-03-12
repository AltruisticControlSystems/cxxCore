//-----------------------------------------------------------------------------
// ConfigManager.hpp
//
// Copyright Altruistic Control Systems and Kenneth Wells, 2015
// Author: Kenneth Wells
//-----------------------------------------------------------------------------
// This program is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the Free
// Software Foundation, either version 3 of the License, or (at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
// more details.
//
// You should have received a copy of the GNU General Public License along
// with this program. If not, see <http://www.gnu.org/licenses/>.
//-----------------------------------------------------------------------------
#include "SingletonCxxQml.hpp"

#include <QMap>
#include <QString>

namespace cxxCore
{

    class ConfigManager: public SingletonCxxQml<ConfigManager>
    {
    public:
        //! loadConfigs
        bool loadConfigs
            (
            const QString& aFilePath //!< The path to the config file
            );

        //! getConfig
        QString getConfig
            (
            const QString& aKey //!< The key to retrieve the config from the
                                //!< map of configurations
            ) const;

    private:
        QMap<QString,QString> mConfigMap; //!< The map of configurations
    };

}// Namespace cxxCore

