/* Function at 0x806C0034, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806C0034(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x806C003C
    *(0x18 + r1) = r30; // stw @ 0x806C0048
    *(0x14 + r1) = r29; // stw @ 0x806C004C
    r29 = r3;
    r3 = r3 + 0x98; // 0x806C0054
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806C005C
    /* li r4, 3 */ // 0x806C0060
    /* lfs f1, 0(r5) */ // 0x806C0064
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r31 = r29 + 0x174; // 0x806C006C
    /* li r30, 0 */ // 0x806C0070
    r0 = *(0x3b4 + r29); // lwz @ 0x806C0074
    if (<) goto 0x0x806c0090;
    r3 = r31;
    /* li r4, 1 */ // 0x806C0084
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* b 0x806c009c */ // 0x806C008C
    r3 = r31;
    /* li r4, 0 */ // 0x806C0094
    FUN_80649FD0(r4, r3, r4); // bl 0x80649FD0
    r30 = r30 + 1; // 0x806C009C
    r31 = r31 + 0x254; // 0x806C00A0
    r29 = r29 + 0x254; // 0x806C00A8
    if (<) goto 0x0x806c0074;
    r0 = *(0x24 + r1); // lwz @ 0x806C00B0
    r31 = *(0x1c + r1); // lwz @ 0x806C00B4
    r30 = *(0x18 + r1); // lwz @ 0x806C00B8
    r29 = *(0x14 + r1); // lwz @ 0x806C00BC
    return;
}