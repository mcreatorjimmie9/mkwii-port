/* Function at 0x8085AF84, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8085AF84(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8085AF94
    r31 = r31 + 0; // 0x8085AF98
    *(8 + r1) = r30; // stw @ 0x8085AF9C
    r30 = r3;
    FUN_80818E48(); // bl 0x80818E48
    /* cntlzw r0, r3 */ // 0x8085AFA8
    r3 = *(0x10 + r30); // lwz @ 0x8085AFAC
    /* srwi r0, r0, 5 */ // 0x8085AFB0
    *(0x23d + r30) = r0; // stb @ 0x8085AFB4
    FUN_8084C04C(); // bl 0x8084C04C
    *(0x23e + r30) = r3; // stb @ 0x8085AFBC
    r3 = *(0x10 + r30); // lwz @ 0x8085AFC0
    r0 = *(0x146 + r3); // lbz @ 0x8085AFC4
    if (!=) goto 0x0x8085afd8;
    /* li r3, 0 */ // 0x8085AFD0
    /* b 0x8085b03c */ // 0x8085AFD4
    FUN_80858694(r3); // bl 0x80858694
    if (==) goto 0x0x8085afec;
    /* li r3, 1 */ // 0x8085AFE4
    /* b 0x8085b03c */ // 0x8085AFE8
    /* .byte 0xe0, 0x5e, 0x04, 0x24 */ // 0x8085AFEC
    /* lfs f0, 0xc4(r31) */ // 0x8085AFF0
    /* .byte 0x10, 0x42, 0x00, 0xb2 */ // 0x8085AFF4
    /* lfs f1, 0x42c(r30) */ // 0x8085AFF8
    /* fmuls f0, f0, f0 */ // 0x8085AFFC
    /* .byte 0x10, 0x21, 0x10, 0x7a */ // 0x8085B000
    /* .byte 0x10, 0x21, 0x10, 0x94 */ // 0x8085B004
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8085B008
    /* mfcr r0 */ // 0x8085B00C
    /* li r3, 1 */ // 0x8085B010
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x8085B014
    if (==) goto 0x0x8085b03c;
    /* lfs f1, 0x454(r30) */ // 0x8085B01C
    /* lfs f0, 0xc8(r31) */ // 0x8085B020
    /* fmuls f1, f1, f1 */ // 0x8085B024
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8085B028
    /* mfcr r0 */ // 0x8085B02C
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x8085B030
    if (==) goto 0x0x8085b03c;
}