/* Function at 0x80788C48, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80788C48(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80788C50
    *(0xc + r1) = r31; // stw @ 0x80788C58
    *(8 + r1) = r30; // stw @ 0x80788C5C
    r31 = *(0 + r4); // lwz @ 0x80788C60
    if (==) goto 0x0x80788ce4;
    /* li r0, 0 */ // 0x80788C6C
    *(0 + r4) = r0; // stw @ 0x80788C70
    if (==) goto 0x0x80788ce4;
    if (==) goto 0x0x80788cdc;
    /* lis r3, 0 */ // 0x80788C7C
    r3 = r3 + 0; // 0x80788C80
    *(0 + r31) = r3; // stw @ 0x80788C84
    r30 = *(0 + r4); // lwz @ 0x80788C88
    if (==) goto 0x0x80788cd0;
    *(0 + r4) = r0; // stw @ 0x80788C94
    if (==) goto 0x0x80788cd0;
    if (==) goto 0x0x80788cc8;
    *(0 + r30) = r3; // stw @ 0x80788CA0
    r3 = *(0 + r4); // lwz @ 0x80788CA4
    if (==) goto 0x0x80788cbc;
    *(0 + r4) = r0; // stw @ 0x80788CB0
    /* li r4, 1 */ // 0x80788CB4
    FUN_80788CFC(r4); // bl 0x80788CFC
    r3 = r30;
    /* li r4, 0 */ // 0x80788CC0
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x80788CD4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x80788CE4
    r31 = *(0xc + r1); // lwz @ 0x80788CE8
    r30 = *(8 + r1); // lwz @ 0x80788CEC
    return;
}