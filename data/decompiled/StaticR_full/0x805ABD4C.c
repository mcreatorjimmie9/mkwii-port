/* Function at 0x805ABD4C, size=248 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805ABD4C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805ABD60
    r4 = *(0 + r3); // lwz @ 0x805ABD64
    /* addis r0, r4, -0x524b */ // 0x805ABD68
    if (==) goto 0x0x805abd7c;
    /* li r0, 0 */ // 0x805ABD74
    /* b 0x805abdec */ // 0x805ABD78
    r4 = *(8 + r3); // lwz @ 0x805ABD7C
    /* srwi r0, r4, 0x1a */ // 0x805ABD80
    if (<) goto 0x0x805abd94;
    /* li r0, 0 */ // 0x805ABD8C
    /* b 0x805abdec */ // 0x805ABD90
    r0 = r4 rlwinm 0xc; // rlwinm
    if (<) goto 0x0x805abda8;
    /* li r0, 0 */ // 0x805ABDA0
    /* b 0x805abdec */ // 0x805ABDA4
    r0 = r4 rlwinm 0x13; // rlwinm
    if (<=) goto 0x0x805abdbc;
    /* li r0, 0 */ // 0x805ABDB4
    /* b 0x805abdec */ // 0x805ABDB8
    r0 = r4 rlwinm 0x1c; // rlwinm
    if (<=) goto 0x0x805abdd0;
    /* li r0, 0 */ // 0x805ABDC8
    /* b 0x805abdec */ // 0x805ABDCC
    r5 = r4 rlwinm 0x17; // rlwinm
    /* li r4, 0xc */ // 0x805ABDD4
    /* subfic r0, r5, 0xc */ // 0x805ABDD8
    /* orc r4, r4, r5 */ // 0x805ABDDC
    /* srwi r0, r0, 1 */ // 0x805ABDE0
    /* subf r0, r0, r4 */ // 0x805ABDE4
    /* srwi r0, r0, 0x1f */ // 0x805ABDE8
    if (!=) goto 0x0x805abdfc;
    /* li r3, 0 */ // 0x805ABDF4
    /* b 0x805abe50 */ // 0x805ABDF8
    r0 = *(0xc + r3); // lhz @ 0x805ABDFC
    r0 = r0 rlwinm 0x15; // rlwinm
    if (!=) goto 0x0x805abe34;
    r4 = *(0x88 + r3); // lwz @ 0x805ABE0C
    r3 = r31;
    r30 = r4 + 0x8c; // 0x805ABE14
    r4 = r30;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* lwzx r0, r31, r30 */ // 0x805ABE20
    /* subf r0, r0, r3 */ // 0x805ABE24
    /* cntlzw r0, r0 */ // 0x805ABE28
    /* srwi r3, r0, 5 */ // 0x805ABE2C
    /* b 0x805abe50 */ // 0x805ABE30
    r3 = r31;
    /* li r4, 0x27fc */ // 0x805ABE38
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r0 = *(0x27fc + r31); // lwz @ 0x805ABE40
}