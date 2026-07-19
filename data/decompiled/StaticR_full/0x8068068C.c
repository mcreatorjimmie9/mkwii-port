/* Function at 0x8068068C, size=248 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_8068068C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8068069C
    r30 = r3;
    r4 = *(0x4b0 + r3); // lwz @ 0x806806A4
    if (!=) goto 0x0x806806b8;
    FUN_80671C3C(); // bl 0x80671C3C
    /* b 0x8068076c */ // 0x806806B4
    /* lis r3, 0 */ // 0x806806B8
    r3 = *(0 + r3); // lwz @ 0x806806BC
    r3 = r3 + 0x34; // 0x806806C0
    FUN_8067F3DC(r3, r3); // bl 0x8067F3DC
    r4 = *(0x4b0 + r30); // lwz @ 0x806806C8
    r31 = r3;
    r5 = *(0x4b4 + r30); // lbz @ 0x806806D0
    r3 = r30 + 0x44; // 0x806806D4
    /* li r6, 0 */ // 0x806806D8
    FUN_80670D14(r3, r6); // bl 0x80670D14
    r4 = *(0x4b8 + r30); // lwz @ 0x806806E0
    r3 = r31;
    FUN_8067FAAC(r3, r6, r3); // bl 0x8067FAAC
    if (==) goto 0x0x8068071c;
    /* li r0, 1 */ // 0x806806F4
    *(0x4bc + r30) = r0; // stw @ 0x806806F8
    r3 = r30 + 0x1c8; // 0x806806FC
    /* li r4, 0x26ad */ // 0x80680700
    /* li r5, 0 */ // 0x80680704
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r4 = r31;
    r3 = r30 + 0x44; // 0x80680710
    FUN_80670D24(r4, r5, r4, r3); // bl 0x80670D24
    /* b 0x80680740 */ // 0x80680718
    /* li r0, 0 */ // 0x8068071C
    *(0x4bc + r30) = r0; // stw @ 0x80680720
    r3 = r30 + 0x1c8; // 0x80680724
    /* li r4, 0x26ac */ // 0x80680728
    /* li r5, 0 */ // 0x8068072C
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r4 = *(0x4b8 + r30); // lwz @ 0x80680734
    r3 = r30 + 0x44; // 0x80680738
    FUN_80670D24(r4, r5, r3); // bl 0x80670D24
    r3 = r30;
    /* li r4, 0x1e */ // 0x80680744
    /* li r5, -1 */ // 0x80680748
    FUN_806724B8(r3, r3, r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x80680750
    /* lis r5, 0 */ // 0x80680754
    /* lfs f1, 0(r5) */ // 0x80680758
    /* li r4, 5 */ // 0x8068075C
    r3 = *(0 + r3); // lwz @ 0x80680760
    /* li r5, 0x1e */ // 0x80680764
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x8068076C
    r31 = *(0xc + r1); // lwz @ 0x80680770
    r30 = *(8 + r1); // lwz @ 0x80680774
    return;
}