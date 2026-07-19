/* Function at 0x806BA800, size=304 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_806BA800(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x806BA818
    r0 = *(0x350 + r3); // lwz @ 0x806BA81C
    if (<) goto 0x0x806ba910;
    r4 = *(0x20 + r3); // lwz @ 0x806BA828
    /* li r29, -1 */ // 0x806BA82C
    /* subf r4, r0, r4 */ // 0x806BA830
    r0 = r4 + -0x3c; // 0x806BA834
    if (>) goto 0x0x806ba848;
    /* li r29, 0 */ // 0x806BA840
    /* b 0x806ba880 */ // 0x806BA844
    r0 = r4 + -0x744; // 0x806BA848
    if (>) goto 0x0x806ba85c;
    /* li r29, 1 */ // 0x806BA854
    /* b 0x806ba880 */ // 0x806BA858
    r0 = r4 + -0xe4c; // 0x806BA85C
    if (>) goto 0x0x806ba870;
    /* li r29, 0 */ // 0x806BA868
    /* b 0x806ba880 */ // 0x806BA86C
    r0 = r4 + -0x14dc; // 0x806BA870
    if (>) goto 0x0x806ba880;
    /* li r29, 1 */ // 0x806BA87C
    r30 = r3 + 0x68; // 0x806BA880
    /* li r28, 0 */ // 0x806BA884
    /* lis r31, 0 */ // 0x806BA888
    if (!=) goto 0x0x806ba8cc;
    r3 = r30 + 0x98; // 0x806BA894
    /* li r4, 0 */ // 0x806BA898
    FUN_8069F4B0(r3, r4); // bl 0x8069F4B0
    r3 = *(0x38 + r3); // lwz @ 0x806BA8A0
    r0 = r3 + -1; // 0x806BA8A4
    if (<=) goto 0x0x806ba900;
    r3 = r30 + 0x98; // 0x806BA8B0
    /* li r4, 0 */ // 0x806BA8B4
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BA8BC
    /* li r4, 1 */ // 0x806BA8C0
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* b 0x806ba900 */ // 0x806BA8C8
    r3 = r30 + 0x98; // 0x806BA8CC
    /* li r4, 0 */ // 0x806BA8D0
    FUN_8069F4B0(r4, r3, r4); // bl 0x8069F4B0
    r3 = *(0x38 + r3); // lwz @ 0x806BA8D8
    r0 = r3 + -1; // 0x806BA8DC
    if (>) goto 0x0x806ba900;
    r3 = r30 + 0x98; // 0x806BA8E8
    /* li r4, 0 */ // 0x806BA8EC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BA8F4
    /* li r4, 3 */ // 0x806BA8F8
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r28 = r28 + 1; // 0x806BA900
    r30 = r30 + 0x174; // 0x806BA904
    if (<) goto 0x0x806ba88c;
    r0 = *(0x24 + r1); // lwz @ 0x806BA910
    r31 = *(0x1c + r1); // lwz @ 0x806BA914
    r30 = *(0x18 + r1); // lwz @ 0x806BA918
    r29 = *(0x14 + r1); // lwz @ 0x806BA91C
    r28 = *(0x10 + r1); // lwz @ 0x806BA920
    return;
}