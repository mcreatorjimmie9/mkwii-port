/* Function at 0x80805F88, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80805F88(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80805F90
    *(0x1c + r1) = r31; // stw @ 0x80805F98
    *(0x18 + r1) = r30; // stw @ 0x80805F9C
    r30 = r3;
    r5 = *(0xfc + r3); // lwz @ 0x80805FA4
    r5 = r5 + 1; // 0x80805FA8
    *(0xfc + r3) = r5; // stw @ 0x80805FAC
    r0 = *(0 + r4); // lwz @ 0x80805FB0
    if (<=) goto 0x0x80806024;
    /* li r0, 0 */ // 0x80805FBC
    *(0xfc + r3) = r0; // stw @ 0x80805FC0
    r4 = r30;
    FUN_80806074(r4, r3); // bl 0x80806074
    /* lis r31, 0 */ // 0x80805FD0
    /* lis r4, 0 */ // 0x80805FD4
    /* lfs f0, 0(r31) */ // 0x80805FD8
    r3 = r30;
    /* stfs f0, 0xc(r1) */ // 0x80805FE0
    r4 = r4 + 0; // 0x80805FE4
    /* li r6, 1 */ // 0x80805FEC
    FUN_80806684(r3, r4, r5, r6); // bl 0x80806684
    r3 = *(8 + r30); // lwz @ 0x80805FF4
    /* lis r6, 0 */ // 0x80805FF8
    /* lfs f1, 0(r31) */ // 0x80805FFC
    /* li r4, 0 */ // 0x80806000
    r3 = *(0x28 + r3); // lwz @ 0x80806004
    /* li r5, 1 */ // 0x80806008
    /* lfs f2, 0(r6) */ // 0x8080600C
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* lfs f1, 0(r31) */ // 0x80806014
    r3 = r30;
    /* li r4, 0x254 */ // 0x8080601C
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    /* lis r3, 0 */ // 0x80806024
    r4 = *(0xfc + r30); // lwz @ 0x80806028
    r0 = *(0 + r3); // lwz @ 0x8080602C
    if (!=) goto 0x0x8080605c;
    r4 = *(8 + r30); // lwz @ 0x80806038
    /* lis r3, 0 */ // 0x8080603C
    /* lis r5, 0 */ // 0x80806040
    /* lfs f1, 0(r3) */ // 0x80806044
    r3 = *(0x28 + r4); // lwz @ 0x80806048
    /* li r4, 2 */ // 0x8080604C
    /* lfs f2, 0(r5) */ // 0x80806050
    /* li r5, 1 */ // 0x80806054
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r0 = *(0x24 + r1); // lwz @ 0x8080605C
    r31 = *(0x1c + r1); // lwz @ 0x80806060
    r30 = *(0x18 + r1); // lwz @ 0x80806064
    return;
}