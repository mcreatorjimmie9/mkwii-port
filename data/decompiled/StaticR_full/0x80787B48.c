/* Function at 0x80787B48, size=268 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_80787B48(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80787B50
    *(0xc + r1) = r31; // stw @ 0x80787B58
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80787B60
    r4 = *(0 + r4); // lwz @ 0x80787B64
    r0 = *(0x14 + r4); // lbz @ 0x80787B68
    if (!=) goto 0x0x80787c28;
    r4 = *(0x26 + r3); // lha @ 0x80787B74
    if (<=) goto 0x0x80787b8c;
    r0 = r4 + -1; // 0x80787B80
    *(0x26 + r3) = r0; // sth @ 0x80787B84
    /* b 0x80787c28 */ // 0x80787B88
    if (!=) goto 0x0x80787c28;
    r3 = *(0x1c + r3); // lwz @ 0x80787B90
    if (==) goto 0x0x80787c20;
    r3 = *(0 + r3); // lwz @ 0x80787B9C
    /* li r30, 0 */ // 0x80787BA0
    if (==) goto 0x0x80787bbc;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x80787bbc;
    /* li r30, 1 */ // 0x80787BB8
    if (==) goto 0x0x80787be0;
    r3 = *(0x1c + r31); // lwz @ 0x80787BC4
    r3 = *(0 + r3); // lwz @ 0x80787BC8
    if (==) goto 0x0x80787be0;
    /* li r4, 0 */ // 0x80787BD4
    /* li r5, 0 */ // 0x80787BD8
    FUN_805E3430(r4, r5); // bl 0x805E3430
    r3 = *(0x1c + r31); // lwz @ 0x80787BE0
    r3 = *(0 + r3); // lwz @ 0x80787BE4
    if (==) goto 0x0x80787bf4;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r4, 0 */ // 0x80787BF4
    r3 = *(0x1c + r31); // lwz @ 0x80787BF8
    r4 = *(0 + r4); // lwz @ 0x80787BFC
    *(0xb8 + r4) = r3; // stw @ 0x80787C00
    r3 = *(0 + r3); // lwz @ 0x80787C04
    if (==) goto 0x0x80787c18;
    r0 = *(0x90 + r3); // lwz @ 0x80787C10
    /* b 0x80787c1c */ // 0x80787C14
    /* li r0, -1 */ // 0x80787C18
    *(0xbc + r4) = r0; // stw @ 0x80787C1C
    /* li r0, -1 */ // 0x80787C20
    *(0x26 + r31) = r0; // sth @ 0x80787C24
    /* lis r3, 0 */ // 0x80787C28
    r3 = *(0 + r3); // lwz @ 0x80787C2C
    FUN_80788DC4(r3); // bl 0x80788DC4
    /* lis r3, 0 */ // 0x80787C34
    r3 = *(0 + r3); // lwz @ 0x80787C38
    FUN_80789558(r3, r3); // bl 0x80789558
    r3 = r31;
    FUN_80789870(r3, r3); // bl 0x80789870
    r0 = *(0x14 + r1); // lwz @ 0x80787C48
    r31 = *(0xc + r1); // lwz @ 0x80787C4C
    r30 = *(8 + r1); // lwz @ 0x80787C50
}