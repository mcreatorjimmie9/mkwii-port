/* Function at 0x8087E7B8, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8087E7B8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8087E7C0
    *(0x14 + r1) = r0; // stw @ 0x8087E7C4
    *(0xc + r1) = r31; // stw @ 0x8087E7C8
    r4 = *(0 + r4); // lwz @ 0x8087E7CC
    r4 = *(0 + r4); // lwz @ 0x8087E7D0
    r0 = *(0x38b + r4); // lbz @ 0x8087E7D4
    if (==) goto 0x0x8087e7e8;
    /* li r3, 1 */ // 0x8087E7E0
    /* b 0x8087e844 */ // 0x8087E7E4
    /* lis r4, 0 */ // 0x8087E7E8
    /* li r31, 0 */ // 0x8087E7EC
    r5 = *(0 + r4); // lwz @ 0x8087E7F0
    /* li r4, 0 */ // 0x8087E7F4
    r0 = *(0xb70 + r5); // lwz @ 0x8087E7F8
    if (<) goto 0x0x8087e810;
    if (>) goto 0x0x8087e810;
    /* li r4, 1 */ // 0x8087E80C
    if (==) goto 0x0x8087e840;
    FUN_80876FEC(r4); // bl 0x80876FEC
    /* lis r4, 0 */ // 0x8087E81C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8087E824
    r3 = *(0xc + r3); // lwz @ 0x8087E828
    /* lwzx r3, r3, r0 */ // 0x8087E82C
    r0 = *(0x38 + r3); // lwz @ 0x8087E830
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8087E834
    if (==) goto 0x0x8087e840;
    /* li r31, 1 */ // 0x8087E83C
    r3 = r31;
    r0 = *(0x14 + r1); // lwz @ 0x8087E844
    r31 = *(0xc + r1); // lwz @ 0x8087E848
    return;
}