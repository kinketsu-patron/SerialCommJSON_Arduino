#include <Arduino.h>
#include <Arduino_JSON.h>

void setup(void)
{
    Serial.begin(9600);
}

void loop(void)
{
    JSONVar human_dic;
    JSONVar wife_dic;
    String message;
    static uint16_t obj_no = 0U;
    
    wife_dic[ "name" ] = "Keiko";
    wife_dic[ "age" ] = "30";
    wife_dic[ "favorite_food" ][ 0 ] = "Chocolate";
    wife_dic[ "favorite_food" ][ 1 ] = "Melon";
    wife_dic[ "favorite_food" ][ 2 ] = "Waffle";

    human_dic[ "obj_no" ] = ++obj_no;
    human_dic[ "name" ] = "Taro";
    human_dic[ "age" ] = 30;
    human_dic[ "favorite_food" ][ 0 ] = "Orange";
    human_dic[ "favorite_food" ][ 1 ] = "Banana";
    human_dic[ "favorite_food" ][ 2 ] = "Peach";
    human_dic[ "wife" ] = wife_dic;

    message = JSON.stringify( human_dic );
    Serial.println( message );
    delay(1000);
}
