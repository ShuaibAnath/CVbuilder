#include "User.h"

User::User(System::String^ Email){ UserEmail = Email; }

User::User(System::Int32^ Id) { UserID = Id; }

User::User() { /*default constructor*/ }