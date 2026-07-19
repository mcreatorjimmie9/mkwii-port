/* Function at 0x8079CB1C, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_8079CB1C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x8079CB24
    *(0xc + r1) = r31; // stw @ 0x8079CB2C
    *(8 + r1) = r30; // stw @ 0x8079CB30
    r31 = *(0 + r3); // lwz @ 0x8079CB34
    if (==) goto 0x0x8079cc48;
    /* li r0, 0 */ // 0x8079CB40
    *(0 + r3) = r0; // stw @ 0x8079CB44
    if (==) goto 0x0x8079cc48;
    FUN_8078AA9C(); // bl 0x8078AA9C
    FUN_807A466C(); // bl 0x807A466C
    FUN_8079C0B8(); // bl 0x8079C0B8
    FUN_807AB208(); // bl 0x807AB208
    FUN_807A82CC(); // bl 0x807A82CC
    /* lis r4, 0 */ // 0x8079CB60
    r3 = r31 + 0x144; // 0x8079CB64
    r4 = r4 + 0; // 0x8079CB68
    /* li r5, 0xc */ // 0x8079CB6C
    /* li r6, 4 */ // 0x8079CB70
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* addic. r3, r31, 0x2c */ // 0x8079CB78
    if (==) goto 0x0x8079cb84;
    FUN_805E3430(r5, r6); // bl 0x805E3430
    if (==) goto 0x0x8079cc40;
    /* lis r4, 0 */ // 0x8079CB8C
}