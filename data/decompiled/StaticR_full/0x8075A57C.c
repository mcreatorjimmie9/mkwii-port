/* Function at 0x8075A57C, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8075A57C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r8, 0 */ // 0x8075A584
    /* li r6, 0 */ // 0x8075A588
    /* li r4, 0 */ // 0x8075A590
    *(0x1c + r1) = r31; // stw @ 0x8075A594
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8075A59C
    *(0x14 + r1) = r29; // stw @ 0x8075A5A0
    /* b 0x8075a5fc */ // 0x8075A5A4
    /* li r9, 0 */ // 0x8075A5A8
    /* li r7, 0 */ // 0x8075A5AC
    /* b 0x8075a5e8 */ // 0x8075A5B0
    r5 = *(0xd8 + r3); // lwz @ 0x8075A5B4
    /* lwzx r0, r5, r7 */ // 0x8075A5B8
    r5 = r8 + r0; // 0x8075A5BC
    r0 = *(0x1b1 + r5); // lbz @ 0x8075A5C0
    if (==) goto 0x0x8075a5e0;
    r5 = *(0x120 + r3); // lwz @ 0x8075A5CC
    /* lwzx r0, r6, r5 */ // 0x8075A5D0
    if (<) goto 0x0x8075a5e0;
    /* stwx r4, r6, r5 */ // 0x8075A5DC
    r7 = r7 + 4; // 0x8075A5E0
    r9 = r9 + 1; // 0x8075A5E4
    r0 = *(0xec + r3); // lwz @ 0x8075A5E8
    if (<) goto 0x0x8075a5b4;
    r6 = r6 + 4; // 0x8075A5F4
    r8 = r8 + 1; // 0x8075A5F8
    r0 = *(0x100 + r3); // lwz @ 0x8075A5FC
    if (<) goto 0x0x8075a5a8;
    /* li r29, 0 */ // 0x8075A608
    /* li r30, 0 */ // 0x8075A60C
    /* b 0x8075a628 */ // 0x8075A610
    r3 = *(0xd8 + r31); // lwz @ 0x8075A614
    /* lwzx r3, r3, r30 */ // 0x8075A618
    FUN_8075EC64(); // bl 0x8075EC64
    r30 = r30 + 4; // 0x8075A620
    r29 = r29 + 1; // 0x8075A624
    r0 = *(0xec + r31); // lwz @ 0x8075A628
    if (<) goto 0x0x8075a614;
    /* li r7, 0 */ // 0x8075A634
    /* li r6, 0 */ // 0x8075A638
    /* li r3, 0x258 */ // 0x8075A63C
    /* b 0x8075a670 */ // 0x8075A640
    r5 = *(0x120 + r31); // lwz @ 0x8075A644
    /* lwzx r4, r5, r6 */ // 0x8075A648
    r0 = r4 + 1; // 0x8075A64C
    /* stwx r0, r5, r6 */ // 0x8075A650
    r4 = *(0x120 + r31); // lwz @ 0x8075A654
    /* lwzx r0, r4, r6 */ // 0x8075A658
    if (<=) goto 0x0x8075a668;
    /* stwx r3, r4, r6 */ // 0x8075A664
    r6 = r6 + 4; // 0x8075A668
    r7 = r7 + 1; // 0x8075A66C
    r0 = *(0x100 + r31); // lwz @ 0x8075A670
    if (<) goto 0x0x8075a644;
    r0 = *(0x24 + r1); // lwz @ 0x8075A67C
    r31 = *(0x1c + r1); // lwz @ 0x8075A680
    r30 = *(0x18 + r1); // lwz @ 0x8075A684
    r29 = *(0x14 + r1); // lwz @ 0x8075A688
    return;
}