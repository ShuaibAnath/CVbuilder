#pragma once

ref class ReusableCategoryBox
{
public:
	System::String^ Heading;
	System::String^ StartYear;
	System::String^ EndYear;
	System::String^ UserSummary;

	//System::Void getExpereinceDetails();
	ReusableCategoryBox();
};


ref class WorkExperienceCategory : public ReusableCategoryBox 
{
public:
	System::String^ CompanyName;
	WorkExperienceCategory(System::String^ Heading, System::String^ StartYear, System::String^ EndYear, System::String^ UserSummary, System::String^ CompanyName);
	WorkExperienceCategory();
};

ref class EducationCategory : public ReusableCategoryBox
{
public:
	System::String^ InstitutionName;
	System::String^ Degree;

	EducationCategory(System::String^ Heading, System::String^ StartYear, System::String^ EndYear, System::String^ UserSummary, System::String^ InstitutionName, System::String^ Degree);
	EducationCategory();
};

ref class ProjectCategory : public WorkExperienceCategory
{
public:
	System::String^ ProjectName;

	ProjectCategory(System::String^ Heading, System::String^ StartYear, System::String^ EndYear, System::String^ UserSummary, System::String^ CompanyName, System::String^ ProjectName);
};