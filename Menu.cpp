#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "Menu.h"

void Menu::gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;    // col
    coord.Y = y;    // row
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Menu::print_login_frame() {
    system("cls");
    std::string s = R"(
                                        _________________________________________
                                       |N4-D24TXCN08k                            |
                                       |            WELCOME TO GUEST             |
                                       |              PLEASE LOGIN!              |
                                       |_________________________________________|
                                       |                                         | 
                                       | Nhap username:                         |
                                       |_________________________________________|
                                       |                                         |  
                                       | Nhap mat khau:                         |
                                       |_________________________________________|    
                                       |                                         |
                                       |      An 'tab' de thoat chuong trinh     |
                                       |_________________________________________|
                                              An '+' de tao tai khoan                                       
    )";
    std::cout << s;
}

void Menu::print_change_information() {
    system("cls");
    std::string s = R"(
                                        ________________________________________
                                       |N4-D24TXCN08k                           |
                                       |           Thay doi thong tin           |
                                       |________________________________________|
                                       |                                        |
                                       | 1. Fullname (ho va ten)                |
                                       |________________________________________|
                                       |                                        |    
                                       | 2. Password (mat khau)                 |
                                       |________________________________________|
                                       |                                        |
                                       | 3. Address (dia chi)                   |
                                       |________________________________________|
                                       |                                        |
                                       | 4. Age (tuoi)                          |
                                       |________________________________________|
                                       |                                        |
                                       | 5. Gender (gioi tinh)                  |
                                       |________________________________________|
                                       |                                        |
                                       | 6. Phone Number (dien thoai)           |
                                       |________________________________________|
                                       |                                        |
                                       | 7. Country (quoc gia)                  |
                                       |________________________________________|
                                       |                                        |
                                       |     An 'tab de thoat chuong trinh      |
                                       |________________________________________|)";
    std::cout << s;
}

void Menu::print_user_menu() {
    system("cls");
    std::string str = R"(
                                        ________________________________________
                                       |N4-D24TXCN08k                           |
                                       |           Menu Nguoi dung              |
                                       |________________________________________|
                                       |                                        |
                                       | 1. Thay doi thong tin                  |
                                       |________________________________________|
                                       |                                        |
                                       | 2. Kiem tra thong tin                  |
                                       |________________________________________|
                                       |                                        |
                                       | 3. Chuyen diem                         |
                                       |________________________________________|
                                       |                                        |
                                       | 4. Kiem tra lich su giao dich          |
                                       |________________________________________|
                                       |                                        |
                                       |      An 'tab' de thoat chuong trinh    |
                                       |________________________________________|)"    ;
    std::cout << str;
}

void Menu::print_manager_menu() {
    system("cls");
    std::string str = R"(
                                        ________________________________________
                                       |N4-D24TXCN08k                           |
                                       |         MENU QUAN TRI                  |
                                       |________________________________________|
                                       |                                        |
                                       | 1. Danh sach nguoi dung                |
                                       |________________________________________|
                                       |                                        |
                                       | 2. Tao tai khoan nguoi dung            |
                                       |________________________________________|
                                       |                                        |
                                       | 3. Lich su giao dich                   |
                                       |________________________________________|
                                       |                                        |
                                       |      An 'tab' de thoat chuong trinh    |
                                       |________________________________________|)"  ;
    std::cout << str;
}

void Menu::notification(std::string s, int x, int y) {
    system("cls");
    std::cout << R"(
                             _____________________________________________________________
                            |                                                             |
                            |               O~~~CAM ON BAN DA SU DUNG~~~O                 |
                            |                                                             |
                            |                                                             |
                            |                                                             |
                            |_____________________________________________________________|)";
    
    gotoxy(x, y);
    std::cout << s;
    gotoxy(5, 15);
    Sleep(3000);
}

void Menu::create_account_screen() {
    system("cls");
    std::string s = R"(
                    _________________________________________________________________________________
                   |N4-D24TXCN08k                                                                    |
                   |                      TAO TAI KHOAN DANG NHAP HE THONG                           |
                   |_________________________________________________________________________________|
                   |                                        |                                        |
                   | Nhap Username:                         | Nhap Ho Ten:                           |                              
                   |________________________________________|________________________________________|
                   |                                        |                                        |
                   | Nhap Password:                         | Nhap Tuoi:                             |                         
                   |________________________________________|________________________________________|
                   |                                        |                                        |
                   | Nhap Lai Password:                     | Nhap Gioi Tinh (Nam : 1, Nu : 0)       |
                   |________________________________________|________________________________________|
                   |                                        |                                        |
                   | Nhap So Dien Thoai:                    | Nhap Dia Chi:                          |
                   |________________________________________|________________________________________|
                   |                                        |                                        |
                   | An 'Tab' de quay lai                   | Nhap Quoc Gia:                         |
                   |________________________________________|________________________________________|)";                          
    std::cout << s;                                          
}

void Menu::create_account_for_user_screen() {
    system("cls");
    std::cout << R"(
                                        ________________________________________
                                       |N4-D24TXCN08k                           |
                                       |     CREATE AN ACCOUNT FOR THE USER     |
                                       |________________________________________|
                                       |                                        |
                                       | 1. Enter User Name:                    |
                                       |________________________________________|
                                       |                                        |
                                       | 2. Enter Full Name:                    |
                                       |________________________________________|
                                       |                                        |
                                       | 3. Enter Age:                          |
                                       |________________________________________|
                                       |                                        |
                                       | 4. Enter Gender (Male : 1, Female : 0) |
                                       |________________________________________|
                                       |                                        |
                                       | 5. Enter Phone Number:                 |
                                       |________________________________________|
                                       |                                        |
                                       | 6. Enter Address:                      |
                                       |________________________________________|
                                       |                                        |
                                       | 7. Enter Country:                      |
                                       |________________________________________|
                                       |                                        |
                                       | Note that pressing the 'Tab' will back |
                                       |________________________________________|)";
}

void Menu::print_otp() {
    system("cls");
    std::cout << R"(
                                        ________________________________________
                                       |                                        |
                                       | --> CHANGE:                            |
                                       |________________________________________|
                                       |                                        |
                                       | Enter new                              |
                                       |________________________________________|
                                       |N4-D24TXCN08k                           |
                                       |          OTP:                          |
                                       |   __________________________________   |                           
                                       |  |                                  |  |  
                                       |  | __   __   __   __   __   __   __ |  |     
                                       |  |__________________________________|  | 
                                       |________________________________________|                                       
                                       |                                        |
                                       | Note that pressing the 'Tab' will back |
                                       |________________________________________|)";
}

void Menu::identification_information() {    
    system("cls");
    std::string str = R"(
    IDENTIFICATION INFORMATION                                               N4-D24TXCN08k
    --------------------------------------------------------------------------------------
    
    Full Name:                              
    Age:          
    Gender:
    

    ACCOUNT INFORMATION                                                      N4-D24TXCN08k
    --------------------------------------------------------------------------------------
    Account Balance:
    Phone Number:
    Country:
    Address:
    
    --------------------------------------------------------------------------------------
                             Note that pressing the 'Tab' will back    
)";
    std::cout << str;
}

void Menu::transfer_money_screen(){
    system("cls");
    std::cout << R"(
                                        ________________________________________
                                       |N4-D24TXCN08k                           |
                                       |             TRANSFER Point             |
                                       |________________________________________|
                                       |                                        |
                                       | Enter Amount:                          |
                                       |________________________________________|
                                       |                                        |
                                       | Enter ID:                              |
                                       |________________________________________|
                                       |                                        |
                                       |          OTP:                          |
                                       |   __________________________________   |
                                       |  |                                  |  |
                                       |  | __   __   __   __   __   __   __ |  |
                                       |  |__________________________________|  |
                                       |________________________________________|
                                       |                                        |
                                       | Note that pressing the 'Tab' will back |
                                       |________________________________________|
    )";
}

void Menu::print_transaction_history() {
    system("cls");
    std::string str = R"(
    TRANSACTION HISTORY                                                      N4-D24TXCN08k
    -------------------                                                      Note that pressing the 'Tab' will back
    _______________________________________________________________________________________________________________
                                                                                                                  
    DATE OF IMPLEMENTATION               TRANSACTION                                  AMOUNT    
    _______________________________________________________________________________________________________________

)";
    std::cout << str;
}

void Menu::print_list_of_users_main() {
    system("cls");
    std::string s = R"(
                                        ________________________________________
                                       |N4-D24TXCN08k                           |
                                       |              LIST OF USERS             |
                                       |________________________________________|
                                       |                                        | 
                                       | 1. Log In To The User's Account        |
                                       |________________________________________|
                                       |                                        |  
                                       | 2. View List of Users                  |
                                       |________________________________________|    
                                       |                                        |
                                       | Note that pressing the 'Tab' will back |
                                       |________________________________________|)";
    std::cout << s;
}

void Menu::print_log_in_user_account() {
    system("cls");
    std::string s = R"(
                                        ________________________________________
                                       | N4-D24TXCN08k                          |  
                                       | Enter the username to search for:      |
                                       |________________________________________|    
                                       |                                        |
                                       | Note that pressing the 'Tab' will back |
                                       |________________________________________|)";
    std::cout << s;    
}

void Menu::print_list_of_user() {
    system("cls");
    std::cout << R"(
    LIST OF USERS                                                            N4-D24TXCN08k                                    
    ------------                                                             Note that pressing the 'Tab' will back
    _______________________________________________________________________________________________________________

    ID WALLET            FULL NAME          PHONE NUMBER         POINTS        ADDRESS            COUNTRY
    _______________________________________________________________________________________________________________

    )";
}

void Menu::system_transaction_history_screen(){
    system("cls");
    std::cout << R"(                                              
    SYSTEM TRANSACTION HISTORY                                               N4-D24TXCN08k
    --------------------------                                               Note that pressing the 'Tab' will back
    _______________________________________________________________________________________________________________

         TRANSACTION TIME                                 TRANSACTION
    _______________________________________________________________________________________________________________

    )";
}

void Menu::print_create_password() {
    system("cls");
    std::string s = R"(
                                        ________________________________________
                                       |N4-D24TXCN08k                           |  
                                       |            CREATE PASSWORD             |
                                       |________________________________________|    
                                       |                                        |
                                       | Enter password (nhap mat khau)         |
                                       |________________________________________|
                                       |                                        |  
                                       | Enter password again(nhap lai mat khau)|
                                       |________________________________________|    
                                       |                                        |
                                       | Note that pressing the 'Tab' will back |
                                       |________________________________________|)";
    std::cout << s;    
}