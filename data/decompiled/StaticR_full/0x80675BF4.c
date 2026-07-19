/* Function at 0x80675BF4, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_80675BF4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 0 */ // 0x80675C0C
    *(0x14 + r1) = r29; // stw @ 0x80675C10
    r29 = r3;
    r3 = r3 + 0x98; // 0x80675C18
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80675C20
    r31 = r3;
    if (==) goto 0x0x80675c3c;
    if (==) goto 0x0x80675c90;
    /* b 0x80675ca0 */ // 0x80675C38
    r3 = *(0 + r3); // lwz @ 0x80675C3C
    /* slwi r0, r0, 4 */ // 0x80675C40
    /* lwzx r3, r3, r0 */ // 0x80675C44
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x80675C4C
    /* lis r0, 0x4330 */ // 0x80675C50
    *(0xc + r1) = r4; // stw @ 0x80675C54
    /* lis r3, 0 */ // 0x80675C58
    /* lfd f3, 0(r3) */ // 0x80675C5C
    /* lis r5, 0 */ // 0x80675C60
    *(8 + r1) = r0; // stw @ 0x80675C64
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x80675C6C
    /* li r4, 3 */ // 0x80675C70
    /* lfd f2, 8(r1) */ // 0x80675C74
    /* lfs f0, 0(r5) */ // 0x80675C78
    /* fsubs f2, f2, f3 */ // 0x80675C7C
    /* fdivs f1, f1, f2 */ // 0x80675C80
    /* fsubs f1, f0, f1 */ // 0x80675C84
    FUN_8069F718(); // bl 0x8069F718
    /* b 0x80675ca0 */ // 0x80675C8C
    /* lis r5, 0 */ // 0x80675C90
    /* li r4, 3 */ // 0x80675C94
    /* lfs f1, 0(r5) */ // 0x80675C98
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r0 = *(0x208 + r29); // lwz @ 0x80675CA0
    /* li r4, 0 */ // 0x80675CA4
    r3 = *(0x294 + r29); // lwz @ 0x80675CA8
    /* mulli r0, r0, 0x17c */ // 0x80675CAC
    r3 = r3 + r0; // 0x80675CB0
    FUN_806765E4(r4); // bl 0x806765E4
    r3 = *(0x1fc + r29); // lwz @ 0x80675CB8
    /* li r0, -1 */ // 0x80675CBC
    *(0x208 + r29) = r0; // stw @ 0x80675CC0
    if (==) goto 0x0x80675ce8;
    r12 = *(0 + r3); // lwz @ 0x80675CCC
    r4 = r29;
    r5 = r30;
    /* li r6, -1 */ // 0x80675CD8
    r12 = *(8 + r12); // lwz @ 0x80675CDC
    /* mtctr r12 */ // 0x80675CE0
}