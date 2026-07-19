/* Function at 0x806A6B18, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806A6B18(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806A6B28
    *(0x18 + r1) = r30; // stw @ 0x806A6B2C
    r30 = r3 + 0x4c8; // 0x806A6B30
    *(0x14 + r1) = r29; // stw @ 0x806A6B34
    /* li r29, 0 */ // 0x806A6B38
    r3 = r30 + 0x98; // 0x806A6B3C
    /* li r4, 1 */ // 0x806A6B40
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806A6B48
    if (==) goto 0x0x806a6b6c;
    r3 = r30 + 0x98; // 0x806A6B54
    /* li r4, 1 */ // 0x806A6B58
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A6B60
    /* li r4, 3 */ // 0x806A6B64
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r29 = r29 + 1; // 0x806A6B6C
    r30 = r30 + 0x178; // 0x806A6B70
    if (<) goto 0x0x806a6b3c;
    r0 = *(0x24 + r1); // lwz @ 0x806A6B7C
    r31 = *(0x1c + r1); // lwz @ 0x806A6B80
    r30 = *(0x18 + r1); // lwz @ 0x806A6B84
    r29 = *(0x14 + r1); // lwz @ 0x806A6B88
    return;
}