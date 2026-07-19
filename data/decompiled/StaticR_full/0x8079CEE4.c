/* Function at 0x8079CEE4, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_8079CEE4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8079CEF8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8079CF00
    r29 = r3;
    if (==) goto 0x0x8079cfdc;
    FUN_8078AA9C(); // bl 0x8078AA9C
    FUN_807A466C(); // bl 0x807A466C
    FUN_8079C0B8(); // bl 0x8079C0B8
    FUN_807AB208(); // bl 0x807AB208
    FUN_807A82CC(); // bl 0x807A82CC
    /* lis r4, 0 */ // 0x8079CF20
    r3 = r29 + 0x144; // 0x8079CF24
    r4 = r4 + 0; // 0x8079CF28
    /* li r5, 0xc */ // 0x8079CF2C
    /* li r6, 4 */ // 0x8079CF30
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* addic. r3, r29, 0x2c */ // 0x8079CF38
    if (==) goto 0x0x8079cf44;
    FUN_805E3430(r5, r6); // bl 0x805E3430
    if (==) goto 0x0x8079cfcc;
    /* lis r4, 0 */ // 0x8079CF4C
    /* lis r3, 0 */ // 0x8079CF50
    r4 = r4 + 0; // 0x8079CF54
}