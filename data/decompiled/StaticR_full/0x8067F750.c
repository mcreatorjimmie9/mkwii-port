/* Function at 0x8067F750, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8067F750(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8067F760
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8067F768
    r30 = r3;
    if (==) goto 0x0x8067f798;
    if (==) goto 0x0x8067f7ac;
    if (==) goto 0x0x8067f7c0;
    if (==) goto 0x0x8067f7d4;
    if (==) goto 0x0x8067f7e8;
    /* b 0x8067f7f4 */ // 0x8067F794
    /* lis r3, 0 */ // 0x8067F798
    /* li r4, 0 */ // 0x8067F79C
    r3 = *(0 + r3); // lwz @ 0x8067F7A0
    FUN_805B3E90(r3, r4); // bl 0x805B3E90
    /* b 0x8067f7f4 */ // 0x8067F7A8
    /* lis r3, 0 */ // 0x8067F7AC
    /* li r4, 1 */ // 0x8067F7B0
    r3 = *(0 + r3); // lwz @ 0x8067F7B4
    FUN_805B3E90(r3, r4); // bl 0x805B3E90
    /* b 0x8067f7f4 */ // 0x8067F7BC
    /* lis r3, 0 */ // 0x8067F7C0
    /* li r4, 2 */ // 0x8067F7C4
    r3 = *(0 + r3); // lwz @ 0x8067F7C8
    FUN_805B3E90(r3, r4); // bl 0x805B3E90
    /* b 0x8067f7f4 */ // 0x8067F7D0
    /* lis r3, 0 */ // 0x8067F7D4
    /* li r4, 3 */ // 0x8067F7D8
    r3 = *(0 + r3); // lwz @ 0x8067F7DC
    FUN_805B3E90(r3, r4); // bl 0x805B3E90
    /* b 0x8067f7f4 */ // 0x8067F7E4
    /* lis r3, 0 */ // 0x8067F7E8
    r3 = *(0 + r3); // lwz @ 0x8067F7EC
    FUN_805B3AD8(r3); // bl 0x805B3AD8
    /* slwi r0, r31, 4 */ // 0x8067F7F4
    /* li r4, 0 */ // 0x8067F7F8
    r3 = r30 + r0; // 0x8067F7FC
    *(8 + r3) = r4; // stw @ 0x8067F800
    /* li r0, 1 */ // 0x8067F804
    *(0xc + r3) = r0; // stw @ 0x8067F808
    *(0x10 + r3) = r4; // stw @ 0x8067F80C
    r31 = *(0xc + r1); // lwz @ 0x8067F810
    r30 = *(8 + r1); // lwz @ 0x8067F814
    r0 = *(0x14 + r1); // lwz @ 0x8067F818
    return;
}