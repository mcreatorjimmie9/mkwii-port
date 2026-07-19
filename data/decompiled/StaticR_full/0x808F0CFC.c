/* Function at 0x808F0CFC, size=412 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808F0CFC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0xe8 + r1) = r30; // stw @ 0x808F0D14
    r30 = r4;
    *(0xe4 + r1) = r29; // stw @ 0x808F0D1C
    FUN_80654ECC(); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808F0D24
    r5 = *(0 + r3); // lwz @ 0x808F0D28
    r0 = *(0x36 + r5); // lha @ 0x808F0D2C
    if (<) goto 0x0x808f0d54;
    /* lis r3, 1 */ // 0x808F0D38
    /* clrlwi r4, r0, 0x18 */ // 0x808F0D3C
    r0 = r3 + -0x6c10; // 0x808F0D40
    r0 = r0 * r4; // 0x808F0D44
    r3 = r5 + r0; // 0x808F0D48
    r3 = r3 + 0x38; // 0x808F0D4C
    /* b 0x808f0d58 */ // 0x808F0D50
    /* li r3, 0 */ // 0x808F0D54
    if (==) goto 0x0x808f0d8c;
    if (==) goto 0x0x808f0db0;
    if (==) goto 0x0x808f0dc8;
    if (==) goto 0x0x808f0dec;
    if (==) goto 0x0x808f0e10;
    if (==) goto 0x0x808f0e28;
    /* b 0x808f0e4c */ // 0x808F0D88
    /* addis r4, r3, 1 */ // 0x808F0D8C
    /* lis r3, 2 */ // 0x808F0D90
    r4 = *(-0x6d48 + r4); // lwz @ 0x808F0D94
    r0 = r3 + -0x7961; // 0x808F0D98
    if (>=) goto 0x0x808f0da8;
    r0 = r4;
    *(8 + r1) = r0; // stw @ 0x808F0DA8
    /* b 0x808f0e4c */ // 0x808F0DAC
    FUN_805D8374(); // bl 0x805D8374
    /* fctiwz f0, f1 */ // 0x808F0DB4
    /* stfd f0, 0xd0(r1) */ // 0x808F0DB8
    r0 = *(0xd4 + r1); // lwz @ 0x808F0DBC
    *(8 + r1) = r0; // stw @ 0x808F0DC0
    /* b 0x808f0e4c */ // 0x808F0DC4
    /* addis r4, r3, 1 */ // 0x808F0DC8
    /* lis r3, 2 */ // 0x808F0DCC
    r4 = *(-0x6d54 + r4); // lwz @ 0x808F0DD0
    r0 = r3 + -0x7961; // 0x808F0DD4
    if (>=) goto 0x0x808f0de4;
    r0 = r4;
    *(8 + r1) = r0; // stw @ 0x808F0DE4
    /* b 0x808f0e4c */ // 0x808F0DE8
    /* addis r4, r3, 1 */ // 0x808F0DEC
    /* lis r3, 2 */ // 0x808F0DF0
    r4 = *(-0x6d50 + r4); // lwz @ 0x808F0DF4
    r0 = r3 + -0x7961; // 0x808F0DF8
    if (>=) goto 0x0x808f0e08;
    r0 = r4;
    *(8 + r1) = r0; // stw @ 0x808F0E08
    /* b 0x808f0e4c */ // 0x808F0E0C
    /* addis r3, r3, 1 */ // 0x808F0E10
    r0 = *(-0x6d74 + r3); // lwz @ 0x808F0E14
    *(8 + r1) = r0; // stw @ 0x808F0E18
    r0 = *(-0x6d70 + r3); // lwz @ 0x808F0E1C
    *(0xc + r1) = r0; // stw @ 0x808F0E20
    /* b 0x808f0e4c */ // 0x808F0E24
    /* addis r4, r3, 1 */ // 0x808F0E28
    /* lis r3, 1 */ // 0x808F0E2C
    r4 = *(-0x6d38 + r4); // lhz @ 0x808F0E30
    r0 = r3 + -1; // 0x808F0E34
    if (>=) goto 0x0x808f0e44;
    r0 = r4;
    /* clrlwi r0, r0, 0x10 */ // 0x808F0E44
    *(8 + r1) = r0; // stw @ 0x808F0E48
    /* lis r29, 0 */ // 0x808F0E4C
    r3 = r31;
    r29 = r29 + 0; // 0x808F0E54
    r5 = r30 + 0x2024; // 0x808F0E58
    r4 = r29 + 0x76; // 0x808F0E5C
    /* li r6, 0 */ // 0x808F0E60
    FUN_806A093C(r3, r5, r4, r6); // bl 0x806A093C
    r3 = r31;
    r4 = r29 + 0x80; // 0x808F0E6C
    r5 = r30 + 0x2056; // 0x808F0E70
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    r0 = *(0xf4 + r1); // lwz @ 0x808F0E7C
    r31 = *(0xec + r1); // lwz @ 0x808F0E80
    r30 = *(0xe8 + r1); // lwz @ 0x808F0E84
    r29 = *(0xe4 + r1); // lwz @ 0x808F0E88
    return;
}