#pragma once

ref class User 
{
public:
	static System::String^ UserEmail;
	static System::Int32^ UserID;

	User(System::String^ Email);
	User(System::Int32^ Id);
	User();
};
