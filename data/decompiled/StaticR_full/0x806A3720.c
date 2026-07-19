/* Function at 0x806A3720, size=200 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_806A3720(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r3;
    r3 = r3 + 0x98; // 0x806A373C
    *(0x10 + r1) = r28; // stw @ 0x806A3740
    r28 = r4;
    /* li r4, 1 */ // 0x806A3748
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    if (==) goto 0x0x806a376c;
    /* lis r5, 0 */ // 0x806A3758
    /* li r4, 2 */ // 0x806A375C
    /* lfs f1, 0(r5) */ // 0x806A3760
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x806a377c */ // 0x806A3768
    /* lis r5, 0 */ // 0x806A376C
    /* li r4, 0 */ // 0x806A3770
    /* lfs f1, 0(r5) */ // 0x806A3774
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r30 = r29 + 0x17c; // 0x806A377C
    /* li r29, 0 */ // 0x806A3780
    /* lis r31, 0 */ // 0x806A3784
    r3 = r30 + 0x98; // 0x806A3788
    /* li r4, 0 */ // 0x806A378C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    if (==) goto 0x0x806a37ac;
    /* lfs f1, 0(r31) */ // 0x806A379C
    /* li r4, 2 */ // 0x806A37A0
    FUN_8069F59C(r4); // bl 0x8069F59C
    /* b 0x806a37b8 */ // 0x806A37A8
    /* lfs f1, 0(r31) */ // 0x806A37AC
    /* li r4, 0 */ // 0x806A37B0
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r29 = r29 + 1; // 0x806A37B8
    r30 = r30 + 0x174; // 0x806A37BC
    if (<) goto 0x0x806a3788;
    r0 = *(0x24 + r1); // lwz @ 0x806A37C8
    r31 = *(0x1c + r1); // lwz @ 0x806A37CC
    r30 = *(0x18 + r1); // lwz @ 0x806A37D0
    r29 = *(0x14 + r1); // lwz @ 0x806A37D4
    r28 = *(0x10 + r1); // lwz @ 0x806A37D8
    return;
}