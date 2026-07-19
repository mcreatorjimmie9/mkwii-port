/* Function at 0x805AC15C, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805AC15C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x805AC168
    *(0xc + r1) = r31; // stw @ 0x805AC16C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805AC174
    r30 = r3;
    *(0 + r3) = r0; // stb @ 0x805AC17C
    r5 = *(0 + r4); // lwz @ 0x805AC180
    /* addis r0, r5, -0x524b */ // 0x805AC184
    if (==) goto 0x0x805ac198;
    /* li r0, 0 */ // 0x805AC190
    /* b 0x805ac208 */ // 0x805AC194
    r4 = *(8 + r4); // lwz @ 0x805AC198
    /* srwi r0, r4, 0x1a */ // 0x805AC19C
    if (<) goto 0x0x805ac1b0;
    /* li r0, 0 */ // 0x805AC1A8
    /* b 0x805ac208 */ // 0x805AC1AC
    r0 = r4 rlwinm 0xc; // rlwinm
    if (<) goto 0x0x805ac1c4;
    /* li r0, 0 */ // 0x805AC1BC
    /* b 0x805ac208 */ // 0x805AC1C0
    r0 = r4 rlwinm 0x13; // rlwinm
    if (<=) goto 0x0x805ac1d8;
    /* li r0, 0 */ // 0x805AC1D0
    /* b 0x805ac208 */ // 0x805AC1D4
    r0 = r4 rlwinm 0x1c; // rlwinm
    if (<=) goto 0x0x805ac1ec;
    /* li r0, 0 */ // 0x805AC1E4
    /* b 0x805ac208 */ // 0x805AC1E8
    r5 = r4 rlwinm 0x17; // rlwinm
    /* li r4, 0xc */ // 0x805AC1F0
    /* subfic r0, r5, 0xc */ // 0x805AC1F4
    /* orc r4, r4, r5 */ // 0x805AC1F8
    /* srwi r0, r0, 1 */ // 0x805AC1FC
    /* subf r0, r0, r4 */ // 0x805AC200
    /* srwi r0, r0, 0x1f */ // 0x805AC204
    if (==) goto 0x0x805ac3a0;
    /* li r4, 0 */ // 0x805AC210
    /* li r5, 0x16 */ // 0x805AC214
    r3 = r3 + 2; // 0x805AC218
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
    r3 = r30 + 2; // 0x805AC220
    r4 = r31 + 0x20; // 0x805AC224
    /* li r5, 0x14 */ // 0x805AC228
    FUN_805E3430(r3, r3, r4, r5); // bl 0x805E3430
    /* li r0, 0 */ // 0x805AC230
    *(0x16 + r30) = r0; // sth @ 0x805AC234
    r0 = *(0xc0 + r30); // lbz @ 0x805AC238
}