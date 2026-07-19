/* Function at 0x8069DCC8, size=348 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_8069DCC8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    r4 = r31;
    *(8 + r1) = r30; // stw @ 0x8069DCE0
    /* lis r30, 0 */ // 0x8069DCE4
    r3 = *(0 + r30); // lwz @ 0x8069DCE8
    r3 = *(0 + r3); // lwz @ 0x8069DCEC
    FUN_80686058(r4); // bl 0x80686058
    if (==) goto 0x0x8069dd1c;
    r0 = *(0x33c + r31); // lbz @ 0x8069DCFC
    if (!=) goto 0x0x8069dd1c;
    r3 = *(0 + r30); // lwz @ 0x8069DD08
    /* li r4, 0 */ // 0x8069DD0C
    r3 = r3 + 0x34; // 0x8069DD10
    FUN_8067F430(r4, r3); // bl 0x8067F430
    *(0x33c + r31) = r3; // stb @ 0x8069DD18
    r0 = *(8 + r31); // lwz @ 0x8069DD1C
    if (!=) goto 0x0x8069de0c;
    r0 = *(0x33c + r31); // lbz @ 0x8069DD28
    if (==) goto 0x0x8069dd64;
    /* lis r4, 0 */ // 0x8069DD34
    /* li r0, 0x65 */ // 0x8069DD38
    /* lfs f1, 0(r4) */ // 0x8069DD3C
    r3 = r31;
    *(0x340 + r31) = r0; // stw @ 0x8069DD44
    /* li r4, 0 */ // 0x8069DD48
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r3 = r31;
    /* li r4, 8 */ // 0x8069DD54
    /* li r5, -1 */ // 0x8069DD58
    FUN_806724B8(r4, r3, r4, r5); // bl 0x806724B8
    /* b 0x8069de0c */ // 0x8069DD60
    /* lis r30, 0 */ // 0x8069DD64
    r4 = r31;
    r3 = *(0 + r30); // lwz @ 0x8069DD6C
    r3 = *(0 + r3); // lwz @ 0x8069DD70
    FUN_80686058(r4); // bl 0x80686058
    if (==) goto 0x0x8069de0c;
    r4 = *(0 + r30); // lwz @ 0x8069DD80
    r0 = *(0x30 + r4); // lwz @ 0x8069DD84
    if (!=) goto 0x0x8069de0c;
    /* lis r3, 0 */ // 0x8069DD90
    r3 = *(0 + r3); // lwz @ 0x8069DD94
    r0 = *(0x38 + r3); // lbz @ 0x8069DD98
    if (==) goto 0x0x8069de0c;
    r3 = *(0x98 + r4); // lwz @ 0x8069DDA4
    r0 = *(0x4cc + r3); // lbz @ 0x8069DDA8
    if (==) goto 0x0x8069ddd4;
    r12 = *(0 + r31); // lwz @ 0x8069DDB4
    r3 = r31;
    /* li r4, 0x59 */ // 0x8069DDBC
    /* li r5, 0 */ // 0x8069DDC0
    r12 = *(0x24 + r12); // lwz @ 0x8069DDC4
    /* mtctr r12 */ // 0x8069DDC8
    /* bctrl  */ // 0x8069DDCC
    /* b 0x8069de0c */ // 0x8069DDD0
    r3 = r31;
    FUN_8069DE30(r3); // bl 0x8069DE30
    /* lis r3, 0 */ // 0x8069DDDC
    /* li r0, 1 */ // 0x8069DDE0
    r3 = *(0 + r3); // lwz @ 0x8069DDE4
    /* li r4, 0x44 */ // 0x8069DDE8
    /* li r5, 0 */ // 0x8069DDEC
    *(0xc + r3) = r0; // stb @ 0x8069DDF0
    r3 = *(0 + r30); // lwz @ 0x8069DDF4
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r3 = *(0 + r30); // lwz @ 0x8069DDFC
    /* li r4, 0 */ // 0x8069DE00
    /* li r5, -1 */ // 0x8069DE04
    FUN_80698CD0(r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x8069DE0C
    r31 = *(0xc + r1); // lwz @ 0x8069DE10
    r30 = *(8 + r1); // lwz @ 0x8069DE14
    return;
}