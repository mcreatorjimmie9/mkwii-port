/* Function at 0x805C8CC8, size=180 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805C8CC8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x805C8CD0
    /* li r3, 0 */ // 0x805C8CD4
    *(0x14 + r1) = r0; // stw @ 0x805C8CD8
    r4 = *(0 + r4); // lwz @ 0x805C8CDC
    r0 = *(0xb70 + r4); // lwz @ 0x805C8CE0
    if (<) goto 0x0x805c8cf8;
    if (>) goto 0x0x805c8cf8;
    /* li r3, 1 */ // 0x805C8CF4
    if (==) goto 0x0x805c8d1c;
    /* lis r3, 0 */ // 0x805C8D00
    r3 = *(0 + r3); // lwz @ 0x805C8D04
    FUN_806E6B18(r3, r3); // bl 0x806E6B18
    if (!=) goto 0x0x805c8d1c;
    /* li r3, 1 */ // 0x805C8D14
    /* b 0x805c8d6c */ // 0x805C8D18
    /* lis r4, 0 */ // 0x805C8D1C
    /* lis r3, 0 */ // 0x805C8D20
    r5 = *(0 + r4); // lwz @ 0x805C8D24
    /* li r6, 0 */ // 0x805C8D28
    r4 = *(0 + r3); // lwz @ 0x805C8D2C
    r5 = *(0x24 + r5); // lbz @ 0x805C8D30
    /* b 0x805c8d5c */ // 0x805C8D34
    r3 = *(0xc + r4); // lwz @ 0x805C8D38
    r0 = r6 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805C8D40
    r0 = *(0x38 + r3); // lwz @ 0x805C8D44
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805C8D48
    if (!=) goto 0x0x805c8d58;
    /* li r3, 0 */ // 0x805C8D50
    /* b 0x805c8d6c */ // 0x805C8D54
    r6 = r6 + 1; // 0x805C8D58
    /* clrlwi r0, r6, 0x18 */ // 0x805C8D5C
    if (<) goto 0x0x805c8d38;
    /* li r3, 1 */ // 0x805C8D68
    r0 = *(0x14 + r1); // lwz @ 0x805C8D6C
    return;
}