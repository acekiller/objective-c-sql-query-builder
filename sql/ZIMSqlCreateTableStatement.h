/*
 * Copyright 2011 Ziminji
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "ZIMSqlStatement.h"

/*!
 @class					ZIMSqlCreateTableStatement
 @discussion			This class represents an SQL create table statements.
 @updated				2011-03-26
 @see					http://www.sqlite.org/lang_createtable.html
 */
@interface ZIMSqlCreateTableStatement : ZIMSqlStatement {

	@private
		NSString *_table;
		NSMutableDictionary *_column;
		NSString *_primaryKey;
		NSString *_uniqueKey;

}
/*!
 @method				table:
 @discussion			This method will set the table used in the SQL statement.
 @param table			The table that will be used in the SQL statement.
 @updated				2011-03-19
 */
- (void) table: (NSString *)table;
/*!
 @method				column:type:
 @discussion			This method will create a column with the specified parameters.
 @param column			The column to be created.
 @param type			The datatype of the column.
 @updated				2011-03-26
 */
- (void) column: (NSString *)column type: (NSString *)type;
/*!
 @method				column:type:
 @discussion			This method will create a column with the specified parameters.
 @param column			The column to be created.
 @param type			The datatype of the column.
 @param unique			This constrains the column to unique values.
 @updated				2011-03-26
 */
- (void) column: (NSString *)column type: (NSString *)type unique: (BOOL)unique;
/*!
 @method				column:type:
 @discussion			This method will create a column with the specified parameters.
 @param column			The column to be created.
 @param type			The datatype of the column.
 @param defaultValue	The default value to be used when no data is provided.
 @updated				2011-03-26
 */
- (void) column: (NSString *)column type: (NSString *)type defaultValue: (NSString *)value;
/*!
 @method				primaryKey:
 @discussion			This method will set the specified columns as the primary key.
 @param columns			The columns to be set as the primary key.
 @updated				2011-03-26
 */
- (void) primaryKey: (NSArray *)columns;
/*!
 @method				uniqueKey:
 @discussion			This method will set the specified columns as a unique key.
 @param column			The columns to be set as a unique key.
 @updated				2011-03-26
 */
- (void) uniqueKey: (NSArray *)columns;
/*!
 @method				statement
 @discussion			This method will return the SQL statement.
 @return				The SQL statement that was constructed.
 @updated				2011-03-26
 */
- (NSString *) statement;

@end
