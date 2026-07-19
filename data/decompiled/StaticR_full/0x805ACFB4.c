/* Function at 0x805ACFB4, size=296 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805ACFB4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805ACFC8
    r4 = *(0 + r3); // lwz @ 0x805ACFCC
    /* addis r0, r4, -0x524b */ // 0x805ACFD0
    if (==) goto 0x0x805acfe4;
    /* li r0, 0 */ // 0x805ACFDC
    /* b 0x805ad054 */ // 0x805ACFE0
    r4 = *(8 + r3); // lwz @ 0x805ACFE4
    /* srwi r0, r4, 0x1a */ // 0x805ACFE8
    if (<) goto 0x0x805acffc;
    /* li r0, 0 */ // 0x805ACFF4
    /* b 0x805ad054 */ // 0x805ACFF8
    r0 = r4 rlwinm 0xc; // rlwinm
    if (<) goto 0x0x805ad010;
    /* li r0, 0 */ // 0x805AD008
    /* b 0x805ad054 */ // 0x805AD00C
    r0 = r4 rlwinm 0x13; // rlwinm
    if (<=) goto 0x0x805ad024;
    /* li r0, 0 */ // 0x805AD01C
    /* b 0x805ad054 */ // 0x805AD020
    r0 = r4 rlwinm 0x1c; // rlwinm
    if (<=) goto 0x0x805ad038;
    /* li r0, 0 */ // 0x805AD030
    /* b 0x805ad054 */ // 0x805AD034
    r5 = r4 rlwinm 0x17; // rlwinm
    /* li r4, 0xc */ // 0x805AD03C
    /* subfic r0, r5, 0xc */ // 0x805AD040
    /* orc r4, r4, r5 */ // 0x805AD044
    /* srwi r0, r0, 1 */ // 0x805AD048
    /* subf r0, r0, r4 */ // 0x805AD04C
    /* srwi r0, r0, 0x1f */ // 0x805AD050
    if (!=) goto 0x0x805ad064;
    /* li r0, 0 */ // 0x805AD05C
    /* b 0x805ad0b8 */ // 0x805AD060
    r0 = *(0xc + r3); // lhz @ 0x805AD064
    r0 = r0 rlwinm 0x15; // rlwinm
    if (!=) goto 0x0x805ad09c;
    r4 = *(0x88 + r3); // lwz @ 0x805AD074
    r3 = r31;
    r30 = r4 + 0x8c; // 0x805AD07C
    r4 = r30;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* lwzx r0, r31, r30 */ // 0x805AD088
    /* subf r0, r0, r3 */ // 0x805AD08C
    /* cntlzw r0, r0 */ // 0x805AD090
    /* srwi r0, r0, 5 */ // 0x805AD094
    /* b 0x805ad0b8 */ // 0x805AD098
    r3 = r31;
    /* li r4, 0x27fc */ // 0x805AD0A0
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r0 = *(0x27fc + r31); // lwz @ 0x805AD0A8
    /* subf r0, r0, r3 */ // 0x805AD0AC
    /* cntlzw r0, r0 */ // 0x805AD0B0
    /* srwi r0, r0, 5 */ // 0x805AD0B4
    if (!=) goto 0x0x805ad0c8;
    /* li r3, 0 */ // 0x805AD0C0
    /* b 0x805ad0e8 */ // 0x805AD0C4
    r0 = *(0xc + r31); // lhz @ 0x805AD0C8
    r0 = r0 rlwinm 0x15; // rlwinm
    if (!=) goto 0x0x805ad0e4;
    r3 = *(0x88 + r31); // lwz @ 0x805AD0D8
}