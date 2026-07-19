/* Function at 0x8082F8E4, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8082F8E4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8082F8F8
    *(0x14 + r1) = r29; // stw @ 0x8082F8FC
    /* lis r29, 0 */ // 0x8082F900
    r29 = r29 + 0; // 0x8082F904
    FUN_808319BC(); // bl 0x808319BC
    /* lis r5, 0 */ // 0x8082F90C
    /* li r7, 0 */ // 0x8082F910
    r5 = r5 + 0; // 0x8082F914
    /* li r6, -1 */ // 0x8082F918
    r0 = r5 + 0x38; // 0x8082F91C
    /* lis r4, 0 */ // 0x8082F920
    /* lis r3, 0 */ // 0x8082F924
    *(0x1a8 + r31) = r7; // sth @ 0x8082F928
    /* lfs f1, 0(r3) */ // 0x8082F92C
    r4 = r4 + 0; // 0x8082F930
    *(0x1ac + r31) = r6; // stw @ 0x8082F934
    /* lis r3, 0 */ // 0x8082F938
    /* lfs f0, 0(r3) */ // 0x8082F93C
    /* lis r3, 0 */ // 0x8082F940
    *(0x1b0 + r31) = r7; // stw @ 0x8082F944
    *(0x1b4 + r31) = r7; // sth @ 0x8082F948
    *(0x1bc + r31) = r7; // stw @ 0x8082F94C
    *(0x1c0 + r31) = r7; // stw @ 0x8082F950
    *(0 + r31) = r5; // stw @ 0x8082F954
    *(0x1a4 + r31) = r0; // stw @ 0x8082F958
    /* lfs f2, 0x454(r4) */ // 0x8082F95C
    /* stfs f1, 0(r29) */ // 0x8082F960
    /* fmuls f1, f1, f2 */ // 0x8082F964
    r3 = *(0 + r3); // lwz @ 0x8082F968
    /* stfs f0, 4(r29) */ // 0x8082F96C
    /* fmuls f0, f1, f1 */ // 0x8082F970
    /* stfs f0, 8(r29) */ // 0x8082F974
    r0 = *(0xb6c + r3); // lwz @ 0x8082F978
    if (==) goto 0x0x8082f998;
    if (==) goto 0x0x8082f9a4;
    /* li r0, 0x78 */ // 0x8082F98C
    *(0xc + r29) = r0; // stw @ 0x8082F990
    /* b 0x8082f9ac */ // 0x8082F994
    /* li r0, 0x96 */ // 0x8082F998
    *(0xc + r29) = r0; // stw @ 0x8082F99C
    /* b 0x8082f9ac */ // 0x8082F9A0
    /* li r0, 0xb4 */ // 0x8082F9A4
    *(0xc + r29) = r0; // stw @ 0x8082F9A8
    /* lis r29, 0 */ // 0x8082F9AC
    /* li r0, 3 */ // 0x8082F9B0
    r30 = r29 + 0; // 0x8082F9B4
    *(0x1c0 + r31) = r31; // stw @ 0x8082F9B8
    /* li r3, 6 */ // 0x8082F9BC
    *(0x1bc + r31) = r30; // stw @ 0x8082F9C0
    *(0x1b4 + r31) = r0; // sth @ 0x8082F9C4
    FUN_805E3430(r3); // bl 0x805E3430
}