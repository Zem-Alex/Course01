#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "raylib.h"
#include <locale.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265

int main(void)
{
    setlocale(LC_ALL, "ru-RU");

    const int screenWidth = 392;
    const int screenHeight = 653;

    InitWindow(screenWidth, screenHeight, "Calculator");

    InitAudioDevice();
    
    Sound fxButton = LoadSound("knopka-vklyucheniya-kassetnogo-pleera.mp3");

    Texture2D buttonMainCalc = LoadTexture("MainCalc.png");
    Texture2D buttonClean = LoadTexture("transparent_button.png");
    Texture2D buttonBack = LoadTexture("transparent_button.png");
    Texture2D buttonCos = LoadTexture("transparent_button.png");
    Texture2D buttonSin = LoadTexture("transparent_button.png");
    Texture2D buttonTan = LoadTexture("transparent_button.png");
    Texture2D buttonRoot = LoadTexture("transparent_button.png");
    Texture2D buttonPower = LoadTexture("transparent_button.png");
    Texture2D button0 = LoadTexture("transparent_button.png");
    Texture2D button1 = LoadTexture("transparent_button.png");
    Texture2D button2 = LoadTexture("transparent_button.png");
    Texture2D button3 = LoadTexture("transparent_button.png");
    Texture2D buttonPlus = LoadTexture("transparent_button.png");
    Texture2D buttonMinus = LoadTexture("transparent_button.png");
    Texture2D buttonMult = LoadTexture("transparent_button.png");
    Texture2D buttonDiv = LoadTexture("transparent_button.png");
    Texture2D buttonResult = LoadTexture("transparent_button.png");
    Texture2D button4 = LoadTexture("transparent_button.png");
    Texture2D button5 = LoadTexture("transparent_button.png");
    Texture2D button6 = LoadTexture("transparent_button.png");
    Texture2D button7 = LoadTexture("transparent_button.png");
    Texture2D button8 = LoadTexture("transparent_button.png");
    Texture2D button9 = LoadTexture("transparent_button.png");

    Rectangle sourceRecMainCalc = { 0, 0, (float)buttonMainCalc.width, (float)buttonMainCalc.height };
    Rectangle sourceRecClean = { 0, 0, (float)buttonClean.width, (float)buttonClean.height };
    Rectangle sourceRecBack = { 0, 0, (float)buttonBack.width, (float)buttonBack.height };
    Rectangle sourceRecCos = { 0, 0, (float)buttonCos.width, (float)buttonCos.height };
    Rectangle sourceRecSin = { 0, 0, (float)buttonSin.width, (float)buttonSin.height };
    Rectangle sourceRecTan = { 0, 0, (float)buttonTan.width, (float)buttonTan.height };
    Rectangle sourceRecRoot = { 0, 0, (float)buttonRoot.width, (float)buttonRoot.height };
    Rectangle sourceRecPower = { 0, 0, (float)buttonPower.width, (float)buttonPower.height };
    Rectangle sourceRec0 = { 0, 0, (float)button0.width, (float)button0.height };
    Rectangle sourceRec1 = { 0, 0, (float)button1.width, (float)button1.height };
    Rectangle sourceRec2 = { 0, 0, (float)button2.width, (float)button2.height };
    Rectangle sourceRec3 = { 0, 0, (float)button3.width, (float)button3.height };
    Rectangle sourceRecPlus = { 0, 0, (float)buttonPlus.width, (float)buttonPlus.height };
    Rectangle sourceRecMinus = { 0, 0, (float)buttonMinus.width, (float)buttonMinus.height };
    Rectangle sourceRecMult = { 0, 0, (float)buttonMult.width, (float)buttonMult.height };
    Rectangle sourceRecDiv = { 0, 0, (float)buttonDiv.width, (float)buttonDiv.height };
    Rectangle sourceRecResult = { 0, 0, (float)buttonResult.width, (float)buttonResult.height };
    Rectangle sourceRec4 = { 0, 0, (float)button4.width, (float)button4.height };
    Rectangle sourceRec5 = { 0, 0, (float)button5.width, (float)button5.height };
    Rectangle sourceRec6 = { 0, 0, (float)button6.width, (float)button6.height };
    Rectangle sourceRec7 = { 0, 0, (float)button7.width, (float)button7.height };
    Rectangle sourceRec8 = { 0, 0, (float)button8.width, (float)button8.height };
    Rectangle sourceRec9 = { 0, 0, (float)button9.width, (float)button9.height };

    Rectangle btnBoundsMainCalc = { 0, 0, (float)buttonMainCalc.width, (float)buttonMainCalc.height }; // расположение кнопки
    Rectangle btnBoundsClean = { 199, 262, (float)buttonClean.width, (float)buttonClean.height };
    Rectangle btnBoundsBack = { 297.5, 262, (float)buttonBack.width, (float)buttonBack.height };
    Rectangle btnBoundsCos = { 100.5, 262, (float)buttonCos.width, (float)buttonCos.height };
    Rectangle btnBoundsSin = { 2, 262, (float)buttonSin.width, (float)buttonSin.height };
    Rectangle btnBoundsTan = { 2, 328, (float)buttonTan.width, (float)buttonTan.height };
    Rectangle btnBoundsRoot = { 199, 328, (float)buttonRoot.width, (float)buttonRoot.height };
    Rectangle btnBoundsPower = { 100.5, 328, (float)buttonPower.width, (float)buttonPower.height };
    Rectangle btnBounds0 = { 100.5, 591.5, (float)button0.width, (float)button0.height };
    Rectangle btnBounds1 = { 2, 526, (float)button1.width, (float)button1.height };
    Rectangle btnBounds2 = { 100.5, 526, (float)button2.width, (float)button2.height }; //+98.5
    Rectangle btnBounds3 = { 199, 526, (float)button3.width, (float)button3.height };
    Rectangle btnBoundsPlus = { 297.5, 526, (float)buttonPlus.width, (float)buttonPlus.height };
    Rectangle btnBoundsMinus = { 297.5, 460.5, (float)buttonMinus.width, (float)buttonMinus.height };
    Rectangle btnBoundsMult = { 297.5, 395, (float)buttonMult.width, (float)buttonMult.height };
    Rectangle btnBoundsDiv = { 297.5, 328, (float)buttonDiv.width, (float)buttonDiv.height };
    Rectangle btnBoundsResult = { 297.5, 591.5, (float)buttonResult.width, (float)buttonResult.height };
    Rectangle btnBounds4 = { 2, 460.5, (float)button4.width, (float)button4.height };//-65.5
    Rectangle btnBounds5 = { 100.5, 460.5, (float)button5.width, (float)button5.height };
    Rectangle btnBounds6 = { 199, 460.5, (float)button6.width, (float)button6.height };
    Rectangle btnBounds7 = { 2, 394, (float)button7.width, (float)button7.height };
    Rectangle btnBounds8 = { 100.5, 394, (float)button8.width, (float)button8.height };
    Rectangle btnBounds9 = { 199, 394, (float)button9.width, (float)button9.height };


    int btnState = 0;              // Button state: 0-NORMAL, 1-MOUSE_HOVER, 2-PRESSED
    bool btnAction = false;

    Vector2 mousePoint = { 0.0f, 0.0f };

    SetTargetFPS(60);

    short index = 0, saveindex = 0;
    char FirsCharNumber[9] = {'\0'}, SecondCharNumber[9] = { '\0' }, CharOperation = '\0';
    long long FirstIntNum = 0, SecondIntNum = 0; double param = 0, result = 0;
    bool flagNum = false, flagOperation = false;

    while (!WindowShouldClose())
    {
        if (flagNum == false)
            FirstIntNum = atoll(FirsCharNumber);
        else
        {
            if (flagNum == true)
                SecondIntNum = atoll(SecondCharNumber);
        }

        if (index >= 8)
        {
            if (flagNum == false)
            {
                flagNum = true;
                saveindex = index;
                index = 0;
            }
            else
                break;
        }

        mousePoint = GetMousePosition();
        btnAction = false;

        ///  Buttons for some functions

        // Button '0'
        if (CheckCollisionPointRec(mousePoint, btnBounds0))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBounds0, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            if (flagNum == false)
            {
                FirsCharNumber[index] = '0';
                index++;
            }
            else
            {
                if (flagNum == true && flagOperation == true)
                {
                    SecondCharNumber[index] = '0';
                    index++;
                }
            }
            btnAction = false;
            btnState = 0;
        }

        // Button '1'
        if (CheckCollisionPointRec(mousePoint, btnBounds1))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else 
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) 
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBounds1, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            if (flagNum == false)
            {
                FirsCharNumber[index] = '1';
                index++;
            }
            else
            {
                if (flagNum == true && flagOperation == true)
                {
                    SecondCharNumber[index] = '1';
                    index++;
                }
            }
            btnAction = false;
            btnState = 0;
        }

        // Button '2'
        if (CheckCollisionPointRec(mousePoint, btnBounds2))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBounds2, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            if (flagNum == false)
            {
                FirsCharNumber[index] = '2';
                index++;
            }
            else
            {
                if (flagNum == true && flagOperation == true)
                {
                    SecondCharNumber[index] = '2';
                    index++;
                }
            }
            btnAction = false;
            btnState = 0;
        }

        // Button '3'
        if (CheckCollisionPointRec(mousePoint, btnBounds3))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBounds3, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            if (flagNum == false)
            {
                FirsCharNumber[index] = '3';
                index++;
            }
            else
            {
                if (flagNum == true && flagOperation == true)
                {
                    SecondCharNumber[index] = '3';
                    index++;
                }
            }
            btnAction = false;
            btnState = 0;
        }

        // Button '4'
        if (CheckCollisionPointRec(mousePoint, btnBounds4))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBounds4, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            if (flagNum == false)
            {
                FirsCharNumber[index] = '4';
                index++;
            }
            else
            {
                if (flagNum == true && flagOperation == true)
                {
                    SecondCharNumber[index] = '4';
                    index++;
                }
            }
            btnAction = false;
            btnState = 0;
        }

        // Button '5'
        if (CheckCollisionPointRec(mousePoint, btnBounds5))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBounds5, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            if (flagNum == false)
            {
                FirsCharNumber[index] = '5';
                index++;
            }
            else
            {
                if (flagNum == true && flagOperation == true)
                {
                    SecondCharNumber[index] = '5';
                    index++;
                }
            }
            btnAction = false;
            btnState = 0;
        }

        // Button '6'
        if (CheckCollisionPointRec(mousePoint, btnBounds6))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBounds6, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            if (flagNum == false)
            {
                FirsCharNumber[index] = '6';
                index++;
            }
            else
            {
                if (flagNum == true && flagOperation == true)
                {
                    SecondCharNumber[index] = '6';
                    index++;
                }
            }
            btnAction = false;
            btnState = 0;
        }

        // Button '7'
        if (CheckCollisionPointRec(mousePoint, btnBounds7))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBounds7, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            if (flagNum == false)
            {
                FirsCharNumber[index] = '7';
                index++;
            }
            else
            {
                if (flagNum == true && flagOperation == true)
                {
                    SecondCharNumber[index] = '7';
                    index++;
                }
            }
            btnAction = false;
            btnState = 0;
        }

        // Button '8'
        if (CheckCollisionPointRec(mousePoint, btnBounds8))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBounds8, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            if (flagNum == false)
            {
                FirsCharNumber[index] = '8';
                index++;
            }
            else
            {
                if (flagNum == true && flagOperation == true)
                {
                    SecondCharNumber[index] = '8';
                    index++;
                }
            }
            btnAction = false;
            btnState = 0;
        }

        // Button '9'
        if (CheckCollisionPointRec(mousePoint, btnBounds9))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBounds9, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            if (flagNum == false)
            {
                FirsCharNumber[index] = '9';
                index++;
            }
            else
            {
                if (flagNum == true && flagOperation == true)
                {
                    SecondCharNumber[index] = '9';
                    index++;
                }
            }
            btnAction = false;
            btnState = 0;
        }

        // Button 'Plus'
        if (CheckCollisionPointRec(mousePoint, btnBoundsPlus))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBoundsPlus, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);
            
            CharOperation = '+';
            flagNum = true;
            flagOperation = true;
            
            if (saveindex == 0)
                saveindex = index;
            index = 0;

            btnAction = false;
            btnState = 0;
        }

        // Button 'Minus'
        if (CheckCollisionPointRec(mousePoint, btnBoundsMinus))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBoundsMinus, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            CharOperation = '-';
            flagNum = true;
            flagOperation = true;

            if (saveindex == 0)
                saveindex = index;
            index = 0;

            btnAction = false;
            btnState = 0;
        }

        // Button 'Mult'
        if (CheckCollisionPointRec(mousePoint, btnBoundsMult))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBoundsMult, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            CharOperation = '*';
            flagNum = true;
            flagOperation = true;

            if (saveindex == 0)
                saveindex = index;
            index = 0;

            btnAction = false;
            btnState = 0;
        }

        // Button 'Div'
        if (CheckCollisionPointRec(mousePoint, btnBoundsDiv))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBoundsDiv, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            CharOperation = '/';
            flagNum = true;
            flagOperation = true;

            if (saveindex == 0)
                saveindex = index;
            index = 0;

            btnAction = false;
            btnState = 0;
        }

        // Button 'Result'
        if (CheckCollisionPointRec(mousePoint, btnBoundsResult))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBoundsResult, Fade(WHITE, 0.5f));
            EndDrawing();
            Sleep(100);

            switch (CharOperation)
            {
            case '+':
                result = FirstIntNum + SecondIntNum;
                break;
            case '-':
                result = FirstIntNum - SecondIntNum;
                break;
            case '*':
                result = FirstIntNum * SecondIntNum;
                break;
            case '/':
                if (SecondIntNum)
                    result = FirstIntNum / SecondIntNum;
                break;
            case 'c':
                param = FirstIntNum;
                if (!SecondIntNum)
                    result = cos(param * PI / 180.0);
                break;
            case 's':
                param = FirstIntNum;
                if (!SecondIntNum)
                    result = sin(param * PI / 180.0);
                break;
            case 't':
                param = FirstIntNum;
                if (!SecondIntNum)
                    result = tan(param * PI / 180.0);
                break;
            case 'r':
                param = FirstIntNum;
                if (!SecondIntNum)
                    result = sqrt(param);
                break;
            case '^':
                result = pow(FirstIntNum, SecondIntNum);
                break;
            default:
                exit(410);
            }
            index = 0;
            
            btnAction = false;
            btnState = 0;
        }
        
        // Button 'Clean'
        if (CheckCollisionPointRec(mousePoint, btnBoundsClean))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBoundsClean, Fade(WHITE, 0.5f));
            EndDrawing();
            Sleep(100);

            for (int i = 0; i < 9; i++)
            {
                FirsCharNumber[i] = '\0';
                SecondCharNumber[i] = '\0';
            }
            
            CharOperation = '\0';
            flagNum = false;
            flagOperation = false;
            index = 0;
            saveindex = 0;
            result = 0;

            btnAction = false;
            btnState = 0;
        }

        // Button 'Back'

        if (CheckCollisionPointRec(mousePoint, btnBoundsBack))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBoundsBack, Fade(WHITE, 0.5f));
            EndDrawing();
            Sleep(100);

            if (flagNum == false && index)
            {
                FirsCharNumber[index-1] = '\0';
                index--;
            }
            else
            {
                if (index) 
                {
                    SecondCharNumber[index-1] = '\0';
                    index--;
                }
                else
                {
                    if (CharOperation != '\0')
                    {
                        flagOperation = false;
                        CharOperation = '\0';
                    }
                    else
                    {
                        index = saveindex;
                        flagNum = false;
                        FirsCharNumber[index - 1] = '\0';
                        index--;
                    }
                    
                    
                }
            }

            btnAction = false;
            btnState = 0;
        }

        // Button 'Cos'
        if (CheckCollisionPointRec(mousePoint, btnBoundsCos))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBoundsCos, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);
            
            CharOperation = 'c';
            flagNum = true;
            flagOperation = true;

            if (saveindex == 0)
                saveindex = index;
            index = 0;

            btnAction = false;
            btnState = 0;
        }

        // Button 'Sin'
        if (CheckCollisionPointRec(mousePoint, btnBoundsSin))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBoundsSin, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            CharOperation = 's';
            flagNum = true;
            flagOperation = true;

            if (saveindex == 0)
                saveindex = index;
            index = 0;

            btnAction = false;
            btnState = 0;
        }

        // Button 'Cos'
        if (CheckCollisionPointRec(mousePoint, btnBoundsCos))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBoundsCos, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            CharOperation = 'c';
            flagNum = true;
            flagOperation = true;

            if (saveindex == 0)
                saveindex = index;
            index = 0;

            btnAction = false;
            btnState = 0;
        }

        // Button 'Root'
        if (CheckCollisionPointRec(mousePoint, btnBoundsRoot))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBoundsRoot, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            CharOperation = 'r';
            flagNum = true;
            flagOperation = true;

            if (saveindex == 0)
                saveindex = index;
            index = 0;

            btnAction = false;
            btnState = 0;
        }

         // Button 'Cos'
        if (CheckCollisionPointRec(mousePoint, btnBoundsTan))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBoundsTan, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            CharOperation = 't';
            flagNum = true;
            flagOperation = true;

            if (saveindex == 0)
                saveindex = index;
            index = 0;

            btnAction = false;
            btnState = 0;
        }

        // Button 'Power'
        if (CheckCollisionPointRec(mousePoint, btnBoundsPower))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                btnState = 2;
            else
                btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            PlaySoundMulti(fxButton);

            BeginDrawing();
            DrawRectangleRec(btnBoundsPower, Fade(BLACK, 0.5f));
            EndDrawing();
            Sleep(100);

            CharOperation = '^';
            flagNum = true;
            flagOperation = true;

            if (saveindex == 0)
                saveindex = index;
            index = 0;

            btnAction = false;
            btnState = 0;
        }

        BeginDrawing();

        ClearBackground(DARKGRAY);// Глобальный бэкграунд

        DrawTextureRec(buttonMainCalc, sourceRecMainCalc, (Vector2) { btnBoundsMainCalc.x, btnBoundsMainCalc.y }, WHITE); // Draw button 
        DrawTextureRec(buttonClean, sourceRecClean, (Vector2) { btnBoundsClean.x, btnBoundsClean.y }, WHITE); // Draw button 
        DrawTextureRec(buttonBack, sourceRecBack, (Vector2) { btnBoundsBack.x, btnBoundsBack.y }, WHITE); // Draw button 
        DrawTextureRec(buttonCos, sourceRecCos, (Vector2) { btnBoundsCos.x, btnBoundsCos.y }, WHITE); // Draw button 
        DrawTextureRec(buttonSin, sourceRecSin, (Vector2) { btnBoundsSin.x, btnBoundsSin.y }, WHITE); // Draw button 
        DrawTextureRec(buttonTan, sourceRecTan, (Vector2) { btnBoundsTan.x, btnBoundsTan.y }, WHITE); // Draw button 
        DrawTextureRec(buttonRoot, sourceRecRoot, (Vector2) { btnBoundsRoot.x, btnBoundsRoot.y }, WHITE); // Draw button 
        DrawTextureRec(buttonPower, sourceRecPower, (Vector2) { btnBoundsPower.x, btnBoundsPower.y }, WHITE); // Draw button 
        DrawTextureRec(button0, sourceRec0, (Vector2) { btnBounds0.x, btnBounds0.y }, WHITE); // Draw button 
        DrawTextureRec(button1, sourceRec1, (Vector2) { btnBounds1.x, btnBounds1.y }, WHITE); // Draw button 
        DrawTextureRec(button2, sourceRec2, (Vector2) { btnBounds2.x, btnBounds2.y }, WHITE); // Draw button 
        DrawTextureRec(button3, sourceRec3, (Vector2) { btnBounds3.x, btnBounds3.y }, WHITE); // Draw button 
        DrawTextureRec(button4, sourceRec4, (Vector2) { btnBounds4.x, btnBounds4.y }, WHITE); // Draw button 
        DrawTextureRec(button5, sourceRec5, (Vector2) { btnBounds5.x, btnBounds5.y }, WHITE); // Draw button 
        DrawTextureRec(button6, sourceRec6, (Vector2) { btnBounds6.x, btnBounds6.y }, WHITE); // Draw button 
        DrawTextureRec(button7, sourceRec7, (Vector2) { btnBounds7.x, btnBounds7.y }, WHITE); // Draw button 
        DrawTextureRec(button8, sourceRec8, (Vector2) { btnBounds8.x, btnBounds8.y }, WHITE); // Draw button 
        DrawTextureRec(button9, sourceRec9, (Vector2) { btnBounds9.x, btnBounds9.y }, WHITE); // Draw button 
        DrawTextureRec(buttonPlus, sourceRecPlus, (Vector2) { btnBoundsPlus.x, btnBoundsPlus.y }, WHITE); // Draw button 
        DrawTextureRec(buttonMinus, sourceRecMinus, (Vector2) { btnBoundsMinus.x, btnBoundsMinus.y }, WHITE); // Draw button 
        DrawTextureRec(buttonMult, sourceRecMult, (Vector2) { btnBoundsMult.x, btnBoundsMult.y }, WHITE); // Draw button 
        DrawTextureRec(buttonDiv, sourceRecDiv, (Vector2) { btnBoundsDiv.x, btnBoundsDiv.y }, WHITE); // Draw button 
        DrawTextureRec(buttonResult, sourceRecResult, (Vector2) { btnBoundsResult.x, btnBoundsResult.y }, WHITE); // Draw button 

        if (CheckCollisionPointRec(mousePoint, btnBounds0))
            DrawRectangleRec(btnBounds0, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBounds1))
            DrawRectangleRec(btnBounds1, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBounds2))
            DrawRectangleRec(btnBounds2, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBounds3))
            DrawRectangleRec(btnBounds3, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBounds4))
            DrawRectangleRec(btnBounds4, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBounds5))
            DrawRectangleRec(btnBounds5, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBounds6))
            DrawRectangleRec(btnBounds6, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBounds7))
            DrawRectangleRec(btnBounds7, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBounds8))
            DrawRectangleRec(btnBounds8, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBounds9))
            DrawRectangleRec(btnBounds9, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBoundsPlus))
            DrawRectangleRec(btnBoundsPlus, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBoundsMinus))
            DrawRectangleRec(btnBoundsMinus, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBoundsMult))
            DrawRectangleRec(btnBoundsMult, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBoundsDiv)) 
            DrawRectangleRec(btnBoundsDiv, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBoundsResult))
            DrawRectangleRec(btnBoundsResult, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBoundsClean))
            DrawRectangleRec(btnBoundsClean, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBoundsBack))
            DrawRectangleRec(btnBoundsBack, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBoundsCos))
            DrawRectangleRec(btnBoundsCos, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBoundsSin))
            DrawRectangleRec(btnBoundsSin, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBoundsTan))
            DrawRectangleRec(btnBoundsTan, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBoundsRoot))
            DrawRectangleRec(btnBoundsRoot, Fade(GRAY, 0.5f));
        if (CheckCollisionPointRec(mousePoint, btnBoundsPower))
            DrawRectangleRec(btnBoundsPower, Fade(GRAY, 0.5f));

        DrawRectangle(95, 35, 198, 47, RAYWHITE);
        DrawRectangleLines(95, 35, 198, 47, GRAY);

        DrawRectangle(95, 95, 198, 47, RAYWHITE);
        DrawRectangleLines(95, 95, 198, 47, GRAY);

        DrawRectangle(55, 70, 31, 31, Fade(GRAY, 0.2f));
        DrawRectangleLines(55, 70, 31, 31, GRAY);
       
        DrawRectangle(45, 175, 300, 47, Fade(GRAY, 0.2f));
        DrawRectangleLines(45, 175, 300, 47, BLACK);

        DrawText(TextFormat("%s", FirsCharNumber), 100, 40, 40, Fade(BLACK, 0.7f));
        DrawText(TextFormat("%c", CharOperation), 62, 72, 30, BLACK);
        DrawText(TextFormat("%s", SecondCharNumber), 100, 100, 40, Fade(BLACK, 0.7f));
        DrawText(TextFormat("%.1lf", result), 50, 180, 40, BLACK);

        EndDrawing();
    }

    //printf_s("\n\n<%lld> %c <%lld>\n\n", FirstIntNum, CharOperation, SecondIntNum);

    UnloadTexture(button0);
    UnloadTexture(button1);
    UnloadTexture(button2);
    UnloadTexture(button3);
    UnloadTexture(button4);
    UnloadTexture(button5);
    UnloadTexture(button6);
    UnloadTexture(button7);
    UnloadTexture(button8);
    UnloadTexture(button9);
    UnloadTexture(buttonPlus);
    UnloadTexture(buttonMinus);
    UnloadTexture(buttonMult);
    UnloadTexture(buttonDiv);
    UnloadTexture(buttonResult);
    UnloadTexture(buttonClean);
    UnloadTexture(buttonBack);

    UnloadSound(fxButton);

    CloseAudioDevice();

    CloseWindow();

    return 0;
}