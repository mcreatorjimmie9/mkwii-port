/* Function at 0x80708BD4, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80708BD4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x80708BDC
    *(0x18 + r1) = r30; // stw @ 0x80708BE8
    *(0x14 + r1) = r29; // stw @ 0x80708BEC
    r29 = r3;
    r3 = r3 + 0x98; // 0x80708BF4
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80708BFC
    /* li r4, 3 */ // 0x80708C00
    /* lfs f1, 0(r5) */ // 0x80708C04
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r31 = r29 + 0x174; // 0x80708C0C
    /* li r30, 0 */ // 0x80708C10
    r0 = *(0x3b4 + r29); // lwz @ 0x80708C14
    if (<) goto 0x0x80708c30;
    r3 = r31;
    /* li r4, 1 */ // 0x80708C24
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* b 0x80708c3c */ // 0x80708C2C
    r3 = r31;
    /* li r4, 0 */ // 0x80708C34
    FUN_80649FD0(r4, r3, r4); // bl 0x80649FD0
    r30 = r30 + 1; // 0x80708C3C
    r31 = r31 + 0x254; // 0x80708C40
    r29 = r29 + 0x254; // 0x80708C48
    if (<) goto 0x0x80708c14;
    r0 = *(0x24 + r1); // lwz @ 0x80708C50
    r31 = *(0x1c + r1); // lwz @ 0x80708C54
    r30 = *(0x18 + r1); // lwz @ 0x80708C58
    r29 = *(0x14 + r1); // lwz @ 0x80708C5C
    return;
}