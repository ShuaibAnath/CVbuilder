#pragma once

ref class ReusableCategoryBox
{
public:
	static System::String^ Heading;
	System::String^ StartYear;
	System::String^ EndYear;
	System::String^ UserSummary;
	//System::Void getExpereinceDetails();
	ReusableCategoryBox();
};


ref class WorkExperienceCategory : public ReusableCategoryBox 
{
public:
	static System::Int32 workObjectCount = 0;
	System::String^ CompanyName;
	WorkExperienceCategory(System::String^ StartYear, System::String^ EndYear, System::String^ UserSummary, System::String^ CompanyName);
	WorkExperienceCategory();
};

ref class EducationCategory : public ReusableCategoryBox
{
public:
	static System::Int32 educationObjectCount = 0;
	System::String^ InstitutionName;
	System::String^ Degree;

	EducationCategory(System::String^ StartYear, System::String^ EndYear, System::String^ UserSummary, System::String^ InstitutionName, System::String^ Degree);
	EducationCategory();
};

ref class ProjectCategory : public WorkExperienceCategory
{
public:
	static System::Int32 projectObjectCount = 0;
	System::String^ ProjectName;
	ProjectCategory(System::String^ StartYear, System::String^ EndYear, System::String^ UserSummary, System::String^ CompanyName, System::String^ ProjectName);
};