#include <iostream>
#include <cstdlib>
#include <string>

void installCompiler(const size_t* choice){
    switch(*choice){

        case 1:
            system("choco install -y mingw");
            break;
        case 2:
            system("choco install -y msys2");
            break;
        default:
            std::cout  << "�v���O�������I�����܂��B" << std::endl;
            exit(0);
            break;
    }
}
int main(void){
    std::cout << "�ǂ���C���X�g�[������������ԍ��œ��͂��Ă��������B" << std::endl;
    std::cout << "1. MinGW���C���X�g�[������" << std::endl;
    std::cout << "2. msys2���C���X�g�[������" << std::endl;
    std::cout << "0. �I������" << std::endl;
    
    size_t choice=4;

    while(choice<0 || choice>2){
        std::cout << "���s�����������̔ԍ�����͂��Ă��������B 1/2/0 :";
        std::cin >> choice;
        
        if(choice<0 || choice>2)
            std::cout << "0����2�܂ł͈̔͂œ��͂��Ă�������" << std::endl;
    }

    installCompiler(&choice);
    std::cout << "OK." << std::endl;
    std::cout << "�C���X�g�[�����������܂���!" << std::endl;
    std::cout << "gcc�Ƒł��ē������ꂽ�����m�F���Ă��������B" << std::endl;
    return 0;
}
