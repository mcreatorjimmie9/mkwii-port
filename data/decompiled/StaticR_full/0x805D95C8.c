/* Function at 0x805D95C8, size=116 bytes */
/* Stack frame: 16 bytes */
/* Calls: 5 function(s) */

void FUN_805D95C8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805D95D4
    if (==) goto 0x0x805d9600;
    if (==) goto 0x0x805d9618;
    if (==) goto 0x0x805d9630;
    if (==) goto 0x0x805d9648;
    if (==) goto 0x0x805d9660;
    /* b 0x805d9678 */ // 0x805D95FC
    /* li r3, 0xcb8 */ // 0x805D9600
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805d967c;
    FUN_805D13DC(r3); // bl 0x805D13DC
    /* b 0x805d967c */ // 0x805D9614
    /* li r3, 0x254c */ // 0x805D9618
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805d967c;
    FUN_805E3024(r3); // bl 0x805E3024
    /* b 0x805d967c */ // 0x805D962C
    /* li r3, 0x256c */ // 0x805D9630
    FUN_805E3430(r3); // bl 0x805E3430
}