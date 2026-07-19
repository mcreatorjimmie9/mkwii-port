/* Function at 0x8067F914, size=240 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8067F914(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* slwi r31, r4, 4 */ // 0x8067F924
    *(8 + r1) = r30; // stw @ 0x8067F928
    r30 = r3;
    r3 = r3 + r31; // 0x8067F930
    r0 = *(4 + r3); // lwz @ 0x8067F934
    if (!=) goto 0x0x8067f9e4;
    if (==) goto 0x0x8067f96c;
    if (==) goto 0x0x8067f980;
    if (==) goto 0x0x8067f994;
    if (==) goto 0x0x8067f9a8;
    if (==) goto 0x0x8067f9bc;
    /* b 0x8067f9c8 */ // 0x8067F968
    /* lis r3, 0 */ // 0x8067F96C
    /* li r4, 0 */ // 0x8067F970
    r3 = *(0 + r3); // lwz @ 0x8067F974
    FUN_805B3E90(r3, r4); // bl 0x805B3E90
    /* b 0x8067f9c8 */ // 0x8067F97C
    /* lis r3, 0 */ // 0x8067F980
    /* li r4, 1 */ // 0x8067F984
    r3 = *(0 + r3); // lwz @ 0x8067F988
    FUN_805B3E90(r3, r4); // bl 0x805B3E90
    /* b 0x8067f9c8 */ // 0x8067F990
    /* lis r3, 0 */ // 0x8067F994
    /* li r4, 2 */ // 0x8067F998
    r3 = *(0 + r3); // lwz @ 0x8067F99C
    FUN_805B3E90(r3, r4); // bl 0x805B3E90
    /* b 0x8067f9c8 */ // 0x8067F9A4
    /* lis r3, 0 */ // 0x8067F9A8
    /* li r4, 3 */ // 0x8067F9AC
    r3 = *(0 + r3); // lwz @ 0x8067F9B0
    FUN_805B3E90(r3, r4); // bl 0x805B3E90
    /* b 0x8067f9c8 */ // 0x8067F9B8
    /* lis r3, 0 */ // 0x8067F9BC
    r3 = *(0 + r3); // lwz @ 0x8067F9C0
    FUN_805B3AD8(r3); // bl 0x805B3AD8
    r3 = r30 + r31; // 0x8067F9C8
    /* li r4, 0 */ // 0x8067F9CC
    *(8 + r3) = r4; // stw @ 0x8067F9D0
    /* li r0, 1 */ // 0x8067F9D4
    *(0xc + r3) = r0; // stw @ 0x8067F9D8
    *(0x10 + r3) = r4; // stw @ 0x8067F9DC
    /* b 0x8067f9ec */ // 0x8067F9E0
    /* li r0, 3 */ // 0x8067F9E4
    *(0xc + r3) = r0; // stw @ 0x8067F9E8
    r0 = *(0x14 + r1); // lwz @ 0x8067F9EC
    r31 = *(0xc + r1); // lwz @ 0x8067F9F0
    r30 = *(8 + r1); // lwz @ 0x8067F9F4
    return;
}