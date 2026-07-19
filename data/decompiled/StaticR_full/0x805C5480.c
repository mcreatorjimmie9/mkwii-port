/* Function at 0x805C5480, size=188 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805C5480(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805C5488
    *(0x14 + r1) = r0; // stw @ 0x805C548C
    r4 = *(0 + r3); // lwz @ 0x805C5490
    r3 = *(0x20 + r4); // lwz @ 0x805C5494
    if (==) goto 0x0x805c54a8;
    r3 = *(4 + r3); // lhz @ 0x805C54A0
    /* b 0x805c54ac */ // 0x805C54A4
    /* li r3, 0 */ // 0x805C54A8
    /* neg r0, r3 */ // 0x805C54AC
    r0 = r0 | r3; // 0x805C54B0
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x805C54B4
    if (==) goto 0x0x805c54e0;
    r3 = *(0x1c + r4); // lwz @ 0x805C54BC
    if (==) goto 0x0x805c54d0;
    r3 = *(4 + r3); // lhz @ 0x805C54C8
    /* b 0x805c54d4 */ // 0x805C54CC
    /* li r3, 0 */ // 0x805C54D0
    /* neg r0, r3 */ // 0x805C54D4
    r0 = r0 | r3; // 0x805C54D8
    /* srwi r0, r0, 0x1f */ // 0x805C54DC
    if (!=) goto 0x0x805c54f0;
    /* li r3, 0 */ // 0x805C54E8
    /* b 0x805c552c */ // 0x805C54EC
    /* lis r3, 0 */ // 0x805C54F0
    /* li r4, 0 */ // 0x805C54F4
    r3 = *(0 + r3); // lwz @ 0x805C54F8
    FUN_805C14C8(r3, r3, r4); // bl 0x805C14C8
    /* extsb. r0, r3 */ // 0x805C5500
    if (>=) goto 0x0x805c5510;
    /* li r3, 0 */ // 0x805C5508
    /* b 0x805c552c */ // 0x805C550C
    /* lis r4, 0 */ // 0x805C5510
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x805C5518
    r3 = *(0xc + r3); // lwz @ 0x805C551C
    /* lwzx r3, r3, r0 */ // 0x805C5520
    r0 = *(0x38 + r3); // lwz @ 0x805C5524
    r3 = r0 rlwinm 0x1f; // rlwinm
    r0 = *(0x14 + r1); // lwz @ 0x805C552C
    return;
}