#include <QCoreApplication>
#include <QSqlDatabase>
#include <qsqlquery.h>

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);
  QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName("myDb2.db");
  //  db.setUserName("m.dehini");
  //  db.setPassword("1234");

  if (!db.open()) {
    qDebug() << "is not open";
    return 1;
  }

  // "create table person (id integer primary key, firstname varchar(20),
  // lastname varchar(30), age integer)" insert into person (id, firstname,
  // lastname, age) values (1, 'Ali', 'Rezaei', 25) SELECT firstname FROM person
  //
  //
  QSqlQuery query(db);
  //  query.exec("create table person2 (id integer primary key,name "
  //             "varchar(20),lastname varchar(20) ,bits bit)");
  //  query.exec(" create table person (id integer primary key, firstname "
  //             "varchar(20),lastname varchar(20),bits bit)");
  //  query.exec("insert into person2 "
  //             "(id,name,lastname,bits)values(1,'mamad','mamadi',0)");
  //  query.exec("insert into person2 "
  //             "(id,name,lastname,bits)values(2,'mamad','mamadi',0)");
  //  query.exec("insert into person2 "
  //             "(id,name,lastname,bits)values(3,'mamad','mamadi',0)");
  //  query.exec("insert into person2 "
  //             "(id,name,lastname,bits)values(4,'mamad','mamadi',0)");
  //  query.exec("insert into person2 "
  //             "(id,name,lastname,bits)values(5,'mamad','mamadi',0)");
  //  query.exec("insert into person2 "
  //             "(id,name,lastname,bits)values(6,'mamad','mamadi',0)");
  //  query.exec("insert into person2 "
  //             "(id,name,lastname,bits)values(7,'mamad','mamadi',0)");
  //  query.exec("insert into person2 "
  //             "(id,name,lastname,bits)values(8,'mamad','mamadi',0)");
  //  query.exec("insert into person2 "
  //             "(id,name,lastname,bits)values(9,'mamad','mamadi',0)");
  //  query.exec("create table person "
  //             "(id integer primary key, "
  //             "name varchar(20), "
  //             "lastname varchar(30), "
  //             "age integer)");

  //  query.exec("insert into person (id, firstname, lastname, age) "
  //             "values (1, 'Ali', 'Rezaei', 25)");
  //  query.exec("insert into person (id, firstname, lastname, age) "
  //             "values (2, 'Ali', 'Rezaei', 25)");

  //  query.exec("INSERT INTO person (id,firstname , lastname , age)"
  //             "values(3,'mohammad','ahmadi',32)");
  //  query.exec("INSERT INTO person(id,firstname,lastname,age)"
  //             "values(10,'reza','mohammadi',31)");
  qDebug() << __LINE__ << query.boundValues();
  qDebug() << __LINE__ << query.lastQuery();
  qDebug() << __LINE__ << query.boundValue(0);
  qDebug() << __LINE__ << query.first();
  qDebug() << __LINE__ << query.boundValues();
  qDebug() << __LINE__ << query.driver();
  qDebug() << __LINE__ << query.size();
  //  query.clear();
  qDebug() << __LINE__ << query.size();
  query.first();
  //  query.exec("select * from person2 order by id asc");
  //  query.exec("select id from person2");

  //  while (query.next()) {
  //    qDebug() << query.value(0).toInt();
  //  }
  //  query.exec("delete from person2 ");
  //  query.exec("SELECT firstname FROM person");
  //  while (query.next()) {
  //    qDebug() << query.value(0).toString();
  //  }
  //  query.next();
  //  qDebug() << query.value("firstname").toString();
  db.close();

  return a.exec();
}
