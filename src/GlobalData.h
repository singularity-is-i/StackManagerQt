//
//  GlobalData.h
//  StackManagerQt/src
//
//  Created by Mohammed Nafees on 6/25/14.
//  Copyright (c) 2014 High Fidelity. All rights reserved.
//

#ifndef GLOBALDATA_H
#define GLOBALDATA_H

#include <QString>
#include <QHash>

class GlobalData
{
public:
    static GlobalData* getInstance();

    QString getPlatform() { return _platform; }
    QString getClientsLaunchPath() { return _clientsLaunchPath; }
    QString getClientsResourcesPath() { return _clientsResourcePath; }
    QString getAssignmentClientExecutablePath() { return _assignmentClientExecutablePath; }
    QString getDomainServerExecutablePath() { return _domainServerExecutablePath; }
    QString getRequirementsURL() { return _requirementsURL; }
    QString getRequirementsZipPath() { return _requirementsZipPath; }
    QString getRequirementsMD5URL() { return _requirementsMD5URL; }
    QString getAssignmentClientURL() { return _assignmentClientURL; }
    QString getAssignmentClientMD5URL() { return _assignmentClientMD5URL; }
    QString getDomainServerURL() { return _domainServerURL; }
    QString getDomainServerResourcesURL() { return _domainServerResourcesURL; }
    QString getDomainServerResourcesZipPath() { return _domainServerResourcesZipPath; }
    QString getDomainServerResourcesMD5URL() { return _domainServerResourcesMD5URL; }
    QString getDomainServerMD5URL() { return _domainServerMD5URL; }
    QString getDefaultDomain() { return _defaultDomain; }
    QString getLogsPath() { return _logsPath; }
    QHash<QString, int> getAvailableAssignmentTypes() { return _availableAssignmentTypes; }
    int indexForAssignmentType(const QString& type);
    QString getOutputLogPathForType(const QString& type);
    QString getErrorLogPathForType(const QString& type);


private:
    GlobalData();

    static GlobalData* _instance;

    QString _platform;
    QString _clientsLaunchPath;
    QString _clientsResourcePath;
    QString _assignmentClientExecutablePath;
    QString _domainServerExecutablePath;
    QString _requirementsURL;
    QString _requirementsZipPath;
    QString _requirementsMD5URL;
    QString _assignmentClientURL;
    QString _assignmentClientMD5URL;
    QString _domainServerURL;
    QString _domainServerResourcesURL;
    QString _domainServerResourcesZipPath;
    QString _domainServerResourcesMD5URL;
    QString _domainServerMD5URL;
    QString _defaultDomain;
    QString _logsPath;
    QHash<QString, int> _availableAssignmentTypes;
};

#endif
