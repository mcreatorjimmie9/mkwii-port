/* Function at 0x808B296C, size=184 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808B296C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x808B2974
    /* lfs f0, 0(r5) */ // 0x808B2978
    *(0x64 + r1) = r0; // stw @ 0x808B297C
    /* lfs f1, 0(r7) */ // 0x808B2980
    *(0x5c + r1) = r31; // stw @ 0x808B2984
    /* lfs f4, 0(r6) */ // 0x808B2988
    /* fcmpu cr0, f1, f0 */ // 0x808B298C
    *(0x58 + r1) = r30; // stw @ 0x808B2990
    r30 = r4;
    /* lfs f3, 4(r6) */ // 0x808B2998
    *(0x54 + r1) = r29; // stw @ 0x808B299C
    r29 = r3;
    /* lfs f2, 8(r6) */ // 0x808B29A4
    /* stfs f4, 0x10(r3) */ // 0x808B29A8
    /* stfs f3, 0x14(r3) */ // 0x808B29AC
    /* stfs f2, 0x18(r3) */ // 0x808B29B0
    if (==) goto 0x0x808b2a20;
    /* stfs f0, 8(r1) */ // 0x808B29B8
    /* stfs f0, 0xc(r1) */ // 0x808B29C4
    /* stfs f0, 0x10(r1) */ // 0x808B29C8
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r30;
    r5 = r4;
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
    /* li r31, 0 */ // 0x808B29E0
    /* b 0x808b2a0c */ // 0x808B29E4
    /* clrlwi r0, r31, 0x18 */ // 0x808B29E8
    r4 = *(0x24 + r29); // lwz @ 0x808B29EC
    /* mulli r5, r0, 0xc */ // 0x808B29F0
    r0 = *(0x28 + r29); // lwz @ 0x808B29F4
    r4 = r4 + r5; // 0x808B29FC
    r5 = r0 + r5; // 0x808B2A00
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r31 + 1; // 0x808B2A08
    r0 = *(0x21 + r29); // lbz @ 0x808B2A0C
    /* clrlwi r3, r31, 0x18 */ // 0x808B2A10
    if (<) goto 0x0x808b29e8;
    /* b 0x808b2a5c */ // 0x808B2A1C
    /* li r31, 0 */ // 0x808B2A20
}