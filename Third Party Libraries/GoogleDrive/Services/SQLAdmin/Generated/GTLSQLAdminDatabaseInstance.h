/* Copyright (c) 2013 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLSQLAdminDatabaseInstance.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Cloud SQL Administration API (sqladmin/v1beta1)
// Description:
//   API for Cloud SQL database instance management.
// Documentation:
//   https://developers.google.com/cloud-sql/docs/admin-api/
// Classes:
//   GTLSQLAdminDatabaseInstance (0 custom class methods, 10 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLSQLAdminSettings;

// ----------------------------------------------------------------------------
//
//   GTLSQLAdminDatabaseInstance
//

// A Cloud SQL instance resource.

@interface GTLSQLAdminDatabaseInstance : GTLObject

// The current disk usage of the instance in bytes.
@property (retain) NSNumber *currentDiskSize;  // longLongValue

// The database engine type and version, for example MYSQL_5_5 for MySQL 5.5.
@property (copy) NSString *databaseVersion;

// Etag for this resource - a version number for the settings object in this
// resource. This field has no effect when passed as a request parameter.
// Instead, the contents of this field should be passed in an 'If-Match' http
// header for use in optimistic locking.
@property (copy) NSString *ETag;

// Name of the Cloud SQL instance. This does not include the project ID.
@property (copy) NSString *instance;

// This is always sql#instance.
@property (copy) NSString *kind;

// The maximum disk size of the instance in bytes.
@property (retain) NSNumber *maxDiskSize;  // longLongValue

// The project ID of the project containing the Cloud SQL instance. The Google
// apps domain is prefixed if applicable.
@property (copy) NSString *project;

// The geographical region. Can be us-east1 or europe-west1. Defaults to
// us-east1. The region can not be changed after instance creation.
@property (copy) NSString *region;

// The user settings.
@property (retain) GTLSQLAdminSettings *settings;

// The current serving state of the Cloud SQL instance. This can be one of the
// following.
// RUNNABLE: The instance is running, or is ready to run when accessed.
// SUSPENDED: The instance is not available, for example due to problems with
// billing.
// PENDING_CREATE: The instance is being created.
// MAINTENANCE: The instance is down for maintenance.
// UNKNOWN_STATE: The state of the instance is unknown.
@property (copy) NSString *state;

@end
