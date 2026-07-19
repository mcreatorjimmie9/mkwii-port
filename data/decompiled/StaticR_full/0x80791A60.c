/* Function at 0x80791A60, size=552 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_80791A60(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80791A78
    r29 = r3;
    r0 = *(0xa9 + r3); // lbz @ 0x80791A80
    if (==) goto 0x0x80791aa4;
    if (==) goto 0x0x80791aa4;
    if (==) goto 0x0x80791aa4;
    /* li r3, 0 */ // 0x80791A9C
    /* b 0x80791c74 */ // 0x80791AA0
    if (==) goto 0x0x80791ab8;
    if (==) goto 0x0x80791b30;
    /* b 0x80791ba4 */ // 0x80791AB4
    r5 = *(0x80 + r3); // lwz @ 0x80791AB8
    /* li r4, 0 */ // 0x80791ABC
    if (==) goto 0x0x80791ae8;
    if (==) goto 0x0x80791ad4;
    r0 = *(0x90 + r5); // lwz @ 0x80791ACC
    /* b 0x80791ad8 */ // 0x80791AD0
    /* li r0, -1 */ // 0x80791AD4
    if (!=) goto 0x0x80791ae8;
    r4 = r3 + 0x80; // 0x80791AE0
    /* b 0x80791b10 */ // 0x80791AE4
    r5 = *(0x84 + r3); // lwz @ 0x80791AE8
    if (==) goto 0x0x80791b10;
    if (==) goto 0x0x80791b00;
    r0 = *(0x90 + r5); // lwz @ 0x80791AF8
    /* b 0x80791b04 */ // 0x80791AFC
    /* li r0, -1 */ // 0x80791B00
    if (!=) goto 0x0x80791b10;
    r4 = r3 + 0x84; // 0x80791B0C
    if (==) goto 0x0x80791ba4;
    r3 = *(0 + r4); // lwz @ 0x80791B18
    if (==) goto 0x0x80791ba4;
    /* li r4, 0 */ // 0x80791B24
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x80791ba4 */ // 0x80791B2C
    r6 = *(0x80 + r3); // lwz @ 0x80791B30
    /* li r5, 0 */ // 0x80791B34
    if (==) goto 0x0x80791b60;
    if (==) goto 0x0x80791b4c;
    r0 = *(0x90 + r6); // lwz @ 0x80791B44
    /* b 0x80791b50 */ // 0x80791B48
    /* li r0, -1 */ // 0x80791B4C
    if (!=) goto 0x0x80791b60;
    r5 = r3 + 0x80; // 0x80791B58
    /* b 0x80791b88 */ // 0x80791B5C
    r6 = *(0x84 + r3); // lwz @ 0x80791B60
    if (==) goto 0x0x80791b88;
    if (==) goto 0x0x80791b78;
    r0 = *(0x90 + r6); // lwz @ 0x80791B70
    /* b 0x80791b7c */ // 0x80791B74
    /* li r0, -1 */ // 0x80791B78
    if (!=) goto 0x0x80791b88;
    r5 = r3 + 0x84; // 0x80791B84
    if (==) goto 0x0x80791ba4;
    r3 = *(0 + r5); // lwz @ 0x80791B90
    if (==) goto 0x0x80791ba4;
    /* li r4, 0 */ // 0x80791B9C
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = r29 + 0x8c; // 0x80791BA4
    FUN_8078FFE0(r4, r3); // bl 0x8078FFE0
    if (==) goto 0x0x80791bbc;
    /* li r31, 0 */ // 0x80791BB4
    /* b 0x80791c70 */ // 0x80791BB8
    r3 = *(0x80 + r29); // lwz @ 0x80791BBC
    if (!=) goto 0x0x80791bd0;
    r31 = r29 + 0x80; // 0x80791BC8
    /* b 0x80791c4c */ // 0x80791BCC
    if (==) goto 0x0x80791bdc;
    r0 = *(0x90 + r3); // lwz @ 0x80791BD4
    /* b 0x80791be0 */ // 0x80791BD8
    /* li r0, -1 */ // 0x80791BDC
    *(8 + r1) = r0; // stw @ 0x80791BE0
    r3 = *(0x84 + r29); // lwz @ 0x80791BE4
    if (!=) goto 0x0x80791bf8;
    r31 = r29 + 0x84; // 0x80791BF0
    /* b 0x80791c4c */ // 0x80791BF4
    if (==) goto 0x0x80791c04;
    r0 = *(0x90 + r3); // lwz @ 0x80791BFC
    /* b 0x80791c08 */ // 0x80791C00
    /* li r0, -1 */ // 0x80791C04
    *(0xc + r1) = r0; // stw @ 0x80791C08
    r4 = r30;
    r3 = r29 + 0x8c; // 0x80791C10
    /* li r6, 2 */ // 0x80791C18
    FUN_8078FF44(r4, r3, r5, r6); // bl 0x8078FF44
    if (>=) goto 0x0x80791c30;
    /* li r31, 0 */ // 0x80791C28
    /* b 0x80791c4c */ // 0x80791C2C
    /* slwi r0, r3, 2 */ // 0x80791C30
    r31 = r29 + r0; // 0x80791C34
    r3 = *(0x80 + r31); // lwzu @ 0x80791C38
    if (==) goto 0x0x80791c4c;
    /* li r4, 0 */ // 0x80791C44
    FUN_805E3430(r4); // bl 0x805E3430
    if (==) goto 0x0x80791c6c;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x80791C60
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* b 0x80791c70 */ // 0x80791C68
    /* li r31, 0 */ // 0x80791C6C
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80791C74
    r31 = *(0x1c + r1); // lwz @ 0x80791C78
    r30 = *(0x18 + r1); // lwz @ 0x80791C7C
    r29 = *(0x14 + r1); // lwz @ 0x80791C80
}