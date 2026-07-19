/* Function at 0x8065EF7C, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_8065EF7C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x8065EF94
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8065EF9C
    r28 = r3;
    if (==) goto 0x0x8065f024;
    /* lis r4, 0 */ // 0x8065EFA8
    /* li r30, 0 */ // 0x8065EFAC
    r4 = r4 + 0; // 0x8065EFB0
    *(0 + r3) = r4; // stw @ 0x8065EFB4
    /* li r31, 0 */ // 0x8065EFB8
    r3 = r28 + r31; // 0x8065EFBC
    r3 = *(0x54 + r3); // lwz @ 0x8065EFC0
    if (==) goto 0x0x8065efe4;
    if (==) goto 0x0x8065efe4;
    r12 = *(0 + r3); // lwz @ 0x8065EFD0
    /* li r4, 1 */ // 0x8065EFD4
    r12 = *(8 + r12); // lwz @ 0x8065EFD8
    /* mtctr r12 */ // 0x8065EFDC
    /* bctrl  */ // 0x8065EFE0
    r30 = r30 + 1; // 0x8065EFE4
    r31 = r31 + 4; // 0x8065EFE8
    if (<) goto 0x0x8065efbc;
    r3 = *(0x308 + r28); // lwz @ 0x8065EFF4
    FUN_805E3430(); // bl 0x805E3430
    r3 = r28 + 0x44; // 0x8065EFFC
    /* li r4, -1 */ // 0x8065F000
    FUN_80668158(r3, r4); // bl 0x80668158
    r3 = r28;
    /* li r4, 0 */ // 0x8065F00C
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8065f024;
    r3 = r28;
}