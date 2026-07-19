/* Function at 0x808329D4, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808329D4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x808329E4
    r31 = r31 + 0; // 0x808329E8
    *(8 + r1) = r30; // stw @ 0x808329EC
    r30 = r3;
    r0 = *(0x78 + r3); // lwz @ 0x808329F4
    r0 = r0 | 4; // 0x808329F8
    *(0x78 + r3) = r0; // stw @ 0x808329FC
    r5 = *(0xc + r4); // lwz @ 0x80832A00
    r0 = *(0xc + r5); // lhz @ 0x80832A04
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80832A08
    if (==) goto 0x0x80832a40;
    /* lfs f1, 0x98(r31) */ // 0x80832A10
    /* li r5, 3 */ // 0x80832A14
    /* lfs f2, 0x9c(r31) */ // 0x80832A18
    /* li r6, 1 */ // 0x80832A1C
    /* lfs f3, 0xa0(r31) */ // 0x80832A20
    FUN_8083C744(r5, r6); // bl 0x8083C744
    /* lfs f1, 0(r31) */ // 0x80832A28
    r3 = r30;
    /* li r4, 0x100 */ // 0x80832A30
    FUN_8082DFAC(r3, r4); // bl 0x8082DFAC
    /* li r3, 1 */ // 0x80832A38
    /* b 0x80832a5c */ // 0x80832A3C
    /* lfs f1, 0x98(r31) */ // 0x80832A40
    /* li r5, 1 */ // 0x80832A44
    /* lfs f2, 0x9c(r31) */ // 0x80832A48
    /* li r6, 0 */ // 0x80832A4C
    /* lfs f3, 0xa0(r31) */ // 0x80832A50
    FUN_8083C744(r5, r6); // bl 0x8083C744
    /* li r3, 0 */ // 0x80832A58
    r0 = *(0x14 + r1); // lwz @ 0x80832A5C
    r31 = *(0xc + r1); // lwz @ 0x80832A60
    r30 = *(8 + r1); // lwz @ 0x80832A64
    return;
}