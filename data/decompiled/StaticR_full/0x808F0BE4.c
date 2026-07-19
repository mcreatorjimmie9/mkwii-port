/* Function at 0x808F0BE4, size=280 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808F0BE4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0xd8 + r1) = r30; // stw @ 0x808F0BFC
    r30 = r4;
    *(0xd4 + r1) = r29; // stw @ 0x808F0C04
    FUN_80654ECC(); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808F0C0C
    r5 = *(0 + r3); // lwz @ 0x808F0C10
    r0 = *(0x36 + r5); // lha @ 0x808F0C14
    if (<) goto 0x0x808f0c3c;
    /* lis r3, 1 */ // 0x808F0C20
    /* clrlwi r4, r0, 0x18 */ // 0x808F0C24
    r0 = r3 + -0x6c10; // 0x808F0C28
    r0 = r0 * r4; // 0x808F0C2C
    r3 = r5 + r0; // 0x808F0C30
    r3 = r3 + 0x38; // 0x808F0C34
    /* b 0x808f0c40 */ // 0x808F0C38
    /* li r3, 0 */ // 0x808F0C3C
    if (==) goto 0x0x808f0c64;
    if (==) goto 0x0x808f0c74;
    if (==) goto 0x0x808f0c8c;
    if (==) goto 0x0x808f0c9c;
    /* b 0x808f0cb0 */ // 0x808F0C60
    /* addis r3, r3, 1 */ // 0x808F0C64
    r0 = *(-0x6fe8 + r3); // lhz @ 0x808F0C68
    *(8 + r1) = r0; // stw @ 0x808F0C6C
    /* b 0x808f0cb0 */ // 0x808F0C70
    /* addis r3, r3, 1 */ // 0x808F0C74
    r0 = *(-0x6d84 + r3); // lwz @ 0x808F0C78
    *(8 + r1) = r0; // stw @ 0x808F0C7C
    r0 = *(-0x6d80 + r3); // lwz @ 0x808F0C80
    *(0xc + r1) = r0; // stw @ 0x808F0C84
    /* b 0x808f0cb0 */ // 0x808F0C88
    /* addis r3, r3, 1 */ // 0x808F0C8C
    r0 = *(-0x6fe0 + r3); // lhz @ 0x808F0C90
    *(8 + r1) = r0; // stw @ 0x808F0C94
    /* b 0x808f0cb0 */ // 0x808F0C98
    /* addis r3, r3, 1 */ // 0x808F0C9C
    r0 = *(-0x6d7c + r3); // lwz @ 0x808F0CA0
    *(8 + r1) = r0; // stw @ 0x808F0CA4
    r0 = *(-0x6d78 + r3); // lwz @ 0x808F0CA8
    *(0xc + r1) = r0; // stw @ 0x808F0CAC
    /* lis r29, 0 */ // 0x808F0CB0
    r3 = r31;
    r29 = r29 + 0; // 0x808F0CB8
    r5 = r30 + 0x2020; // 0x808F0CBC
    r4 = r29 + 0x66; // 0x808F0CC0
    /* li r6, 0 */ // 0x808F0CC4
    FUN_806A093C(r3, r5, r4, r6); // bl 0x806A093C
    r3 = r31;
    r4 = r29 + 0x70; // 0x808F0CD0
    r5 = r30 + 0x2052; // 0x808F0CD4
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    r0 = *(0xe4 + r1); // lwz @ 0x808F0CE0
    r31 = *(0xdc + r1); // lwz @ 0x808F0CE4
    r30 = *(0xd8 + r1); // lwz @ 0x808F0CE8
    r29 = *(0xd4 + r1); // lwz @ 0x808F0CEC
    return;
}