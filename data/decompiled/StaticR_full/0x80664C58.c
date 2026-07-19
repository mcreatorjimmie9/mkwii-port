/* Function at 0x80664C58, size=156 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_80664C58(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0xd4 + r1) = r29; // stw @ 0x80664C74
    r29 = r4;
    *(0xd0 + r1) = r28; // stw @ 0x80664C7C
    r28 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    *(0x50 + r1) = r31; // stw @ 0x80664C8C
    r3 = r28;
    r4 = r29;
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r3 = r28 + 0x98; // 0x80664CA0
    /* li r4, 0 */ // 0x80664CA4
    FUN_8069F4A0(r4, r5, r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80664CAC
    /* li r4, 1 */ // 0x80664CB0
    /* lfs f1, 0(r31) */ // 0x80664CB4
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r28 + 0x98; // 0x80664CBC
    /* li r4, 1 */ // 0x80664CC0
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80664CC8
    r4 = r30;
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0xe4 + r1); // lwz @ 0x80664CD4
    r31 = *(0xdc + r1); // lwz @ 0x80664CD8
    r30 = *(0xd8 + r1); // lwz @ 0x80664CDC
    r29 = *(0xd4 + r1); // lwz @ 0x80664CE0
    r28 = *(0xd0 + r1); // lwz @ 0x80664CE4
    return;
}