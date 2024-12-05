#!/bin/bash
welcome(){
    tput setaf 3
    echo -e "________________________________________"
    echo -e " |                                    |"
    echo -e " |--------- USER REGISTRATION --------|"
    echo -e "_|____________________________________|_\n\n"
    tput sgr0
    echo -e " Hello Welcome to this bank company. Feel Free to make this bank your  bank\nWe ensure your safety as well as the safety of your money\n"
    echo -e "\n To Proceed in this our app you need to sign up by creating your account and making and initial deposit\n\n"
    echo -e "So lets proceed ... \nPlease fill the following infos\n\n"
}   
welcome
userRegistration()
{
echo -e "\nPlease enter your Full name "
read name
while [[ -z ${name} ]]; do
echo -e "\nSorry buy your name cannot be null"
read -p "Please Enter your name again: " name
done
echo -e "\nPlease Enter your date of birth [yyyy-mmmm-dddd]"
read dateofbirth
while [[ -z ${dateofbirth} ]]; do 
echo -e "\nSorry buy your date of birth cannot be null"
read -p "Please Enter your date of birth again: " dateofbirth
done



}
userRegistration