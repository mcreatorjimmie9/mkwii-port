/* Function at 0x807CB704, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807CB704(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807CB714
    r31 = r31 + 0; // 0x807CB718
    *(0x18 + r1) = r30; // stw @ 0x807CB71C
    r30 = r3;
    r4 = r30 + 0xf0; // 0x807CB728
    r5 = r30 + 0x15c; // 0x807CB72C
    FUN_807AECB4(r3, r4, r5); // bl 0x807AECB4
    /* lfs f0, 8(r1) */ // 0x807CB734
    /* stfs f0, 0xf0(r30) */ // 0x807CB738
    /* fmuls f2, f0, f0 */ // 0x807CB73C
    /* lfs f0, 0xc(r31) */ // 0x807CB740
    /* lfs f1, 0xc(r1) */ // 0x807CB744
    /* stfs f1, 0xf4(r30) */ // 0x807CB748
    /* fmuls f1, f1, f1 */ // 0x807CB74C
    /* lfs f3, 0x10(r1) */ // 0x807CB750
    /* stfs f3, 0xf8(r30) */ // 0x807CB754
    /* fmuls f3, f3, f3 */ // 0x807CB758
    /* fadds f1, f2, f1 */ // 0x807CB75C
    /* fadds f1, f3, f1 */ // 0x807CB760
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807CB764
    /* cror cr0eq, cr0lt, cr0eq */ // 0x807CB768
    /* mfcr r0 */ // 0x807CB76C
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x807CB770
    if (==) goto 0x0x807cb790;
    /* lfs f1, 0(r31) */ // 0x807CB778
    /* lfs f0, 8(r31) */ // 0x807CB77C
    /* stfs f1, 0xf0(r30) */ // 0x807CB780
    /* stfs f0, 0xf4(r30) */ // 0x807CB784
    /* stfs f1, 0xf8(r30) */ // 0x807CB788
    /* b 0x807cb798 */ // 0x807CB78C
    r3 = r30 + 0xf0; // 0x807CB790
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x807CB798
    r31 = *(0x1c + r1); // lwz @ 0x807CB79C
    r30 = *(0x18 + r1); // lwz @ 0x807CB7A0
    return;
}