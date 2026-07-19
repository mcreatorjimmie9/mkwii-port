/* Function at 0x806EA930, size=344 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_806EA930(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x806EA948
    r28 = r3;
    r0 = *(0 + r3); // lbz @ 0x806EA950
    if (==) goto 0x0x806eaa68;
    /* lis r30, 0 */ // 0x806EA95C
    r3 = *(0 + r30); // lwz @ 0x806EA960
    FUN_806E6B18(); // bl 0x806E6B18
    if (==) goto 0x0x806eaa68;
    r3 = r28;
    FUN_806EAC60(r3); // bl 0x806EAC60
    r28 = r28 + 0x38; // 0x806EA978
    /* li r29, 0 */ // 0x806EA97C
    /* li r31, 1 */ // 0x806EA980
    r5 = *(0 + r30); // lwz @ 0x806EA984
    /* clrlwi r0, r29, 0x18 */ // 0x806EA988
    r3 = r31 << r0; // slw
    r0 = *(0x291c + r5); // lwz @ 0x806EA990
    /* mulli r0, r0, 0x58 */ // 0x806EA994
    r4 = r5 + r0; // 0x806EA998
    r0 = *(0x48 + r4); // lwz @ 0x806EA99C
    /* and. r0, r3, r0 */ // 0x806EA9A0
    if (==) goto 0x0x806ea9f4;
    r0 = *(0x59 + r4); // lbz @ 0x806EA9A8
    if (==) goto 0x0x806ea9f4;
    r0 = r29 rlwinm 5; // rlwinm
    r3 = r29 rlwinm 2; // rlwinm
    r4 = r5 + r0; // 0x806EA9BC
    r0 = *(0x27a8 + r4); // lwz @ 0x806EA9C0
    /* mulli r0, r0, 0x30 */ // 0x806EA9C4
    r0 = r5 + r0; // 0x806EA9C8
    r3 = r3 + r0; // 0x806EA9CC
    r3 = *(0x150 + r3); // lwz @ 0x806EA9D0
    r3 = *(0xc + r3); // lwz @ 0x806EA9D4
    r0 = *(8 + r3); // lwz @ 0x806EA9D8
    if (!=) goto 0x0x806ea9f4;
    r4 = *(0 + r3); // lwz @ 0x806EA9E4
    r3 = r28;
    /* li r5, 4 */ // 0x806EA9EC
    FUN_805E3430(r3, r5); // bl 0x805E3430
    r29 = r29 + 1; // 0x806EA9F4
    r28 = r28 + 4; // 0x806EA9F8
    if (<) goto 0x0x806ea984;
    /* lis r3, 0 */ // 0x806EAA04
    /* lis r28, 0 */ // 0x806EAA08
    r6 = *(0 + r3); // lwz @ 0x806EAA0C
    /* li r5, 1 */ // 0x806EAA10
    r3 = *(0 + r28); // lwz @ 0x806EAA14
    r4 = *(0x291c + r6); // lwz @ 0x806EAA18
    r0 = *(0x9e0 + r3); // lwz @ 0x806EAA1C
    /* mulli r4, r4, 0x58 */ // 0x806EAA20
    r6 = r6 + r4; // 0x806EAA24
    r4 = *(0x59 + r6); // lbz @ 0x806EAA28
    r6 = *(0x48 + r6); // lwz @ 0x806EAA2C
    r4 = r5 << r4; // slw
    /* andc r6, r6, r4 */ // 0x806EAA34
    r0 = r6 & r0; // 0x806EAA38
    if (==) goto 0x0x806eaa68;
    FUN_806F4CDC(); // bl 0x806F4CDC
    if (==) goto 0x0x806eaa68;
    r3 = *(0 + r28); // lwz @ 0x806EAA50
    FUN_806F4C14(); // bl 0x806F4C14
    if (==) goto 0x0x806eaa68;
    r3 = *(0 + r28); // lwz @ 0x806EAA60
    FUN_806F4BA8(); // bl 0x806F4BA8
    r0 = *(0x24 + r1); // lwz @ 0x806EAA68
    r31 = *(0x1c + r1); // lwz @ 0x806EAA6C
    r30 = *(0x18 + r1); // lwz @ 0x806EAA70
    r29 = *(0x14 + r1); // lwz @ 0x806EAA74
    r28 = *(0x10 + r1); // lwz @ 0x806EAA78
    return;
}