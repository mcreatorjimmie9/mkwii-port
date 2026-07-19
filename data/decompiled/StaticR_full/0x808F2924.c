/* Function at 0x808F2924, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808F2924(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808F292C
    *(0xc + r1) = r31; // stw @ 0x808F2934
    *(8 + r1) = r30; // stw @ 0x808F2938
    r30 = r3;
    r5 = *(0 + r4); // lwz @ 0x808F2940
    r0 = *(0x36 + r5); // lha @ 0x808F2944
    if (<) goto 0x0x808f296c;
    /* lis r3, 1 */ // 0x808F2950
    /* clrlwi r4, r0, 0x18 */ // 0x808F2954
    r0 = r3 + -0x6c10; // 0x808F2958
    r0 = r0 * r4; // 0x808F295C
    r3 = r5 + r0; // 0x808F2960
    r31 = r3 + 0x38; // 0x808F2964
    /* b 0x808f2970 */ // 0x808F2968
    /* li r31, 0 */ // 0x808F296C
    /* addis r3, r31, 1 */ // 0x808F2970
    r4 = r30;
    r3 = r3 + -0x7008; // 0x808F2978
    FUN_805D84B0(r4, r3); // bl 0x805D84B0
    if (==) goto 0x0x808f2990;
    /* li r3, 0 */ // 0x808F2988
    /* b 0x808f29f0 */ // 0x808F298C
    r3 = r30;
    FUN_808F2A08(r3, r3); // bl 0x808F2A08
    /* addis r5, r31, 1 */ // 0x808F2998
    /* lis r4, 2 */ // 0x808F299C
    r0 = *(-0x6d68 + r5); // lwz @ 0x808F29A0
    r6 = r4 + -0x7961; // 0x808F29A4
    if (>=) goto 0x0x808f29b4;
    r6 = r0;
    /* addis r5, r31, 1 */ // 0x808F29B4
    /* lis r4, 2 */ // 0x808F29B8
    r5 = *(-0x6d6c + r5); // lwz @ 0x808F29BC
    r0 = r4 + -0x7961; // 0x808F29C0
    if (>=) goto 0x0x808f29d0;
    r0 = r5;
    r4 = r0 + r6; // 0x808F29D4
    /* li r0, 0 */ // 0x808F29D8
    if (<) goto 0x0x808f29ec;
    if (>) goto 0x0x808f29ec;
    /* li r0, 1 */ // 0x808F29E8
    r3 = r0;
    r0 = *(0x14 + r1); // lwz @ 0x808F29F0
    r31 = *(0xc + r1); // lwz @ 0x808F29F4
    r30 = *(8 + r1); // lwz @ 0x808F29F8
    return;
}