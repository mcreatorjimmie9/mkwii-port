/* Function at 0x805CD7A4, size=296 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805CD7A4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805CD7AC
    *(0x1c + r1) = r31; // stw @ 0x805CD7B4
    /* li r31, 0 */ // 0x805CD7B8
    *(0x18 + r1) = r30; // stw @ 0x805CD7BC
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x805CD7C4
    r0 = *(0xb74 + r4); // lwz @ 0x805CD7C8
    if (!=) goto 0x0x805cd7dc;
    /* li r3, 0 */ // 0x805CD7D4
    /* b 0x805cd8b4 */ // 0x805CD7D8
    r4 = *(4 + r3); // lwz @ 0x805CD7DC
    r0 = *(0x1c + r4); // lbz @ 0x805CD7E0
    if (==) goto 0x0x805cd8b0;
    r4 = *(0x10c + r3); // lwz @ 0x805CD7EC
    if (>) goto 0x0x805cd804;
    r0 = r4 + 1; // 0x805CD7F8
    *(0x10c + r3) = r0; // stw @ 0x805CD7FC
    /* b 0x805cd8b0 */ // 0x805CD800
    /* lis r4, 0 */ // 0x805CD804
    /* lis r3, 0 */ // 0x805CD808
    /* li r0, 0 */ // 0x805CD80C
    *(0x12 + r1) = r0; // stb @ 0x805CD810
    r4 = r4 + 0; // 0x805CD814
    r3 = *(0 + r3); // lwz @ 0x805CD818
    *(8 + r1) = r4; // stw @ 0x805CD81C
    *(0xc + r1) = r0; // sth @ 0x805CD824
    *(0xe + r1) = r0; // stb @ 0x805CD828
    *(0x10 + r1) = r0; // sth @ 0x805CD82C
    FUN_805C51F8(r4); // bl 0x805C51F8
    r0 = *(0xc + r1); // lhz @ 0x805CD834
    r3 = *(0xe + r1); // lbz @ 0x805CD838
    /* mulli r0, r0, 0x3c */ // 0x805CD83C
    r4 = *(0x10 + r1); // lhz @ 0x805CD840
    r0 = r3 + r0; // 0x805CD844
    /* mulli r0, r0, 0x3e8 */ // 0x805CD848
    r3 = r4 + r0; // 0x805CD84C
    if (<=) goto 0x0x805cd8b0;
    r0 = *(0x110 + r30); // lwz @ 0x805CD858
    if (<=) goto 0x0x805cd8b0;
    /* li r31, 0 */ // 0x805CD864
    r3 = r30 + r31; // 0x805CD868
    r0 = *(0x108 + r3); // lbz @ 0x805CD86C
    if (==) goto 0x0x805cd8a0;
    r3 = *(4 + r30); // lwz @ 0x805CD878
    r0 = r0 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805CD880
    /* lwzx r3, r3, r0 */ // 0x805CD884
    r0 = *(0x38 + r3); // lwz @ 0x805CD888
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805CD88C
    if (!=) goto 0x0x805cd8a0;
    /* li r4, 3 */ // 0x805CD894
    /* li r5, 1 */ // 0x805CD898
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r31 = r31 + 1; // 0x805CD8A0
    if (<) goto 0x0x805cd868;
    /* li r31, 1 */ // 0x805CD8AC
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x805CD8B4
    r31 = *(0x1c + r1); // lwz @ 0x805CD8B8
    r30 = *(0x18 + r1); // lwz @ 0x805CD8BC
    return;
}