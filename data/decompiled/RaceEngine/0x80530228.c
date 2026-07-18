/**
 * init__System10RaceConfigFv
 * @addr 0x80530228
 * @size 1772 bytes
 * @frame 80 bytes
 * @calls 2 function(s)
 */
void System10RaceConfig(void* self) {
    /* sth r11, 0xfc0(r9) */
    /* sth r11, 0xfc6(r9) */
    /* stb r6, 0xfc9(r9) */
    /* stb r6, 0xfc8(r9) */
    /* sth r11, 0x10b0(r9) */
    /* sth r11, 0x10b6(r9) */
    /* stb r5, 0x10b9(r9) */
    /* stb r5, 0x10b8(r9) */
    /* sth r11, 0x11a0(r9) */
    /* sth r11, 0x11a6(r9) */
    /* stb r4, 0x11a9(r9) */
    /* stb r4, 0x11a8(r9) */
    /* bdnz 0x805301a8 */
    /* r4 = r3+0x2370 */
    /* li r11, 0 */
    /* li r0, 2 */
    /* li r6, 3 */
    /* li r5, 1 */
    /* rlwinm r4, r4, 0, 0, 0x1c */
    /* stb r11, 0x177c(r3) */
    /* li r12, 0 */
    /* stb r6, 0x177d(r3) */
    /* r3+0x2360 = r11 */
    /* r3+0x235c = r5 */
    /* stb r6, 0x236d(r3) */
    /* r3+0x234c = r5 */
    /* r3+0x2370 = r4 */
    /* mtctr r0 */
    /* clrlwi r10, r12, 0x18 */
    /* addi r0, r12, 2 */
    /* mulli r5, r10, 0xf0 */
    /* addi r4, r12, 1 */
    /* clrlwi r7, r0, 0x18 */
    /* addi r0, r12, 3 */
    /* add r9, r3, r5 */
    /* clrlwi r8, r4, 0x18 */
    /* sth r11, 0x18e0(r9) */
    /* clrlwi r6, r0, 0x18 */
    /* addi r4, r12, 4 */
    /* addi r0, r12, 5 */
    /* sth r11, 0x18e6(r9) */
    /* clrlwi r5, r4, 0x18 */
    /* addi r10, r10, 1 */
    /* clrlwi r4, r0, 0x18 */
    /* stb r10, 0x18e9(r9) */
    /* addi r0, r8, 1 */
    /* addi r7, r7, 1 */
    /* addi r6, r6, 1 */
    /* stb r10, 0x18e8(r9) */
    /* addi r5, r5, 1 */
    /* addi r4, r4, 1 */
    /* addi r12, r12, 6 */
    /* sth r11, 0x19d0(r9) */
    /* sth r11, 0x19d6(r9) */
    /* stb r0, 0x19d9(r9) */
    /* stb r0, 0x19d8(r9) */
    /* sth r11, 0x1ac0(r9) */
    /* sth r11, 0x1ac6(r9) */
    /* stb r7, 0x1ac9(r9) */
    /* stb r7, 0x1ac8(r9) */
    /* sth r11, 0x1bb0(r9) */
    /* sth r11, 0x1bb6(r9) */
    /* stb r6, 0x1bb9(r9) */
    /* stb r6, 0x1bb8(r9) */
    /* sth r11, 0x1ca0(r9) */
    /* sth r11, 0x1ca6(r9) */
    /* stb r5, 0x1ca9(r9) */
    /* stb r5, 0x1ca8(r9) */
    /* sth r11, 0x1d90(r9) */
    /* sth r11, 0x1d96(r9) */
    /* stb r4, 0x1d99(r9) */
    /* stb r4, 0x1d98(r9) */
    /* bdnz 0x80530298 */
    /* li r4, 0 */
    /* li r0, 3 */
    /* stb r4, 0x236c(r3) */
    /* stb r0, 0x236d(r3) */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80530228: b1 69 0f c0              sth      r11, 0xfc0(r9) */
/* 0x8053022c: b1 69 0f c6              sth      r11, 0xfc6(r9) */
/* 0x80530230: 98 c9 0f c9              stb      r6, 0xfc9(r9) */
/* 0x80530234: 98 c9 0f c8              stb      r6, 0xfc8(r9) */
/* 0x80530238: b1 69 10 b0              sth      r11, 0x10b0(r9) */
/* 0x8053023c: b1 69 10 b6              sth      r11, 0x10b6(r9) */
/* 0x80530240: 98 a9 10 b9              stb      r5, 0x10b9(r9) */
/* 0x80530244: 98 a9 10 b8              stb      r5, 0x10b8(r9) */
/* 0x80530248: b1 69 11 a0              sth      r11, 0x11a0(r9) */
/* 0x8053024c: b1 69 11 a6              sth      r11, 0x11a6(r9) */
/* 0x80530250: 98 89 11 a9              stb      r4, 0x11a9(r9) */
/* 0x80530254: 98 89 11 a8              stb      r4, 0x11a8(r9) */
/* 0x80530258: 42 00 ff 50              bdnz     0x805301a8 */
/* 0x8053025c: 80 83 23 70              lwz      r4, 0x2370(r3) */
/* 0x80530260: 39 60 00 00              li       r11, 0 */
/* 0x80530264: 38 00 00 02              li       r0, 2 */
/* 0x80530268: 38 c0 00 03              li       r6, 3 */
/* 0x8053026c: 38 a0 00 01              li       r5, 1 */
/* 0x80530270: 54 84 00 38              rlwinm   r4, r4, 0, 0, 0x1c */
/* 0x80530274: 99 63 17 7c              stb      r11, 0x177c(r3) */
/* 0x80530278: 39 80 00 00              li       r12, 0 */
/* 0x8053027c: 98 c3 17 7d              stb      r6, 0x177d(r3) */
/* 0x80530280: 91 63 23 60              stw      r11, 0x2360(r3) */
/* 0x80530284: 90 a3 23 5c              stw      r5, 0x235c(r3) */
/* 0x80530288: 98 c3 23 6d              stb      r6, 0x236d(r3) */
/* 0x8053028c: 90 a3 23 4c              stw      r5, 0x234c(r3) */
/* 0x80530290: 90 83 23 70              stw      r4, 0x2370(r3) */
/* 0x80530294: 7c 09 03 a6              mtctr    r0 */
/* 0x80530298: 55 8a 06 3e              clrlwi   r10, r12, 0x18 */
/* 0x8053029c: 38 0c 00 02              addi     r0, r12, 2 */
/* 0x805302a0: 1c aa 00 f0              mulli    r5, r10, 0xf0 */
/* 0x805302a4: 38 8c 00 01              addi     r4, r12, 1 */
/* 0x805302a8: 54 07 06 3e              clrlwi   r7, r0, 0x18 */
/* 0x805302ac: 38 0c 00 03              addi     r0, r12, 3 */
/* 0x805302b0: 7d 23 2a 14              add      r9, r3, r5 */
/* 0x805302b4: 54 88 06 3e              clrlwi   r8, r4, 0x18 */
/* 0x805302b8: b1 69 18 e0              sth      r11, 0x18e0(r9) */
/* 0x805302bc: 54 06 06 3e              clrlwi   r6, r0, 0x18 */
/* 0x805302c0: 38 8c 00 04              addi     r4, r12, 4 */
/* 0x805302c4: 38 0c 00 05              addi     r0, r12, 5 */
/* 0x805302c8: b1 69 18 e6              sth      r11, 0x18e6(r9) */
/* 0x805302cc: 54 85 06 3e              clrlwi   r5, r4, 0x18 */
/* 0x805302d0: 39 4a 00 01              addi     r10, r10, 1 */
/* 0x805302d4: 54 04 06 3e              clrlwi   r4, r0, 0x18 */
/* 0x805302d8: 99 49 18 e9              stb      r10, 0x18e9(r9) */
/* 0x805302dc: 38 08 00 01              addi     r0, r8, 1 */
/* 0x805302e0: 38 e7 00 01              addi     r7, r7, 1 */
/* 0x805302e4: 38 c6 00 01              addi     r6, r6, 1 */
/* 0x805302e8: 99 49 18 e8              stb      r10, 0x18e8(r9) */
/* 0x805302ec: 38 a5 00 01              addi     r5, r5, 1 */
/* 0x805302f0: 38 84 00 01              addi     r4, r4, 1 */
/* 0x805302f4: 39 8c 00 06              addi     r12, r12, 6 */
/* 0x805302f8: b1 69 19 d0              sth      r11, 0x19d0(r9) */
/* 0x805302fc: b1 69 19 d6              sth      r11, 0x19d6(r9) */
/* 0x80530300: 98 09 19 d9              stb      r0, 0x19d9(r9) */
/* 0x80530304: 98 09 19 d8              stb      r0, 0x19d8(r9) */
/* 0x80530308: b1 69 1a c0              sth      r11, 0x1ac0(r9) */
/* 0x8053030c: b1 69 1a c6              sth      r11, 0x1ac6(r9) */
/* 0x80530310: 98 e9 1a c9              stb      r7, 0x1ac9(r9) */
/* 0x80530314: 98 e9 1a c8              stb      r7, 0x1ac8(r9) */
/* 0x80530318: b1 69 1b b0              sth      r11, 0x1bb0(r9) */
/* 0x8053031c: b1 69 1b b6              sth      r11, 0x1bb6(r9) */
/* 0x80530320: 98 c9 1b b9              stb      r6, 0x1bb9(r9) */
/* 0x80530324: 98 c9 1b b8              stb      r6, 0x1bb8(r9) */
/* 0x80530328: b1 69 1c a0              sth      r11, 0x1ca0(r9) */
/* 0x8053032c: b1 69 1c a6              sth      r11, 0x1ca6(r9) */
/* 0x80530330: 98 a9 1c a9              stb      r5, 0x1ca9(r9) */
/* 0x80530334: 98 a9 1c a8              stb      r5, 0x1ca8(r9) */
/* 0x80530338: b1 69 1d 90              sth      r11, 0x1d90(r9) */
/* 0x8053033c: b1 69 1d 96              sth      r11, 0x1d96(r9) */
/* 0x80530340: 98 89 1d 99              stb      r4, 0x1d99(r9) */
/* 0x80530344: 98 89 1d 98              stb      r4, 0x1d98(r9) */
/* 0x80530348: 42 00 ff 50              bdnz     0x80530298 */
/* 0x8053034c: 38 80 00 00              li       r4, 0 */
/* 0x80530350: 38 00 00 03              li       r0, 3 */
/* 0x80530354: 98 83 23 6c              stb      r4, 0x236c(r3) */
/* 0x80530358: 98 03 23 6d              stb      r0, 0x236d(r3) */
/* 0x8053035c: 4e 80 00 20              blr       */
/* 0x80530360: 38 00 00 00              li       r0, 0 */
/* 0x80530364: b0 03 00 d8              sth      r0, 0xd8(r3) */
/* 0x80530368: b0 03 00 de              sth      r0, 0xde(r3) */
/* 0x8053036c: 98 83 00 e1              stb      r4, 0xe1(r3) */
/* 0x80530370: 98 83 00 e0              stb      r4, 0xe0(r3) */
/* 0x80530374: 4e 80 00 20              blr       */
/* 0x80530378: 98 83 00 e1              stb      r4, 0xe1(r3) */
/* 0x8053037c: 4e 80 00 20              blr       */
/* 0x80530380: 98 83 00 e0              stb      r4, 0xe0(r3) */
/* 0x80530384: 4e 80 00 20              blr       */
/* 0x80530388: 80 83 0b 70              lwz      r4, 0xb70(r3) */
/* 0x8053038c: 38 c0 00 01              li       r6, 1 */
/* 0x80530390: 38 00 00 02              li       r0, 2 */
/* 0x80530394: 39 60 00 00              li       r11, 0 */
/* 0x80530398: 54 84 00 38              rlwinm   r4, r4, 0, 0, 0x1c */
/* 0x8053039c: 38 a0 00 03              li       r5, 3 */
/* 0x805303a0: 91 63 0b 60              stw      r11, 0xb60(r3) */
/* 0x805303a4: 39 80 00 00              li       r12, 0 */
/* 0x805303a8: 90 c3 0b 5c              stw      r6, 0xb5c(r3) */
/* 0x805303ac: 98 a3 0b 6d              stb      r5, 0xb6d(r3) */
/* 0x805303b0: 90 c3 0b 4c              stw      r6, 0xb4c(r3) */
/* 0x805303b4: 90 83 0b 70              stw      r4, 0xb70(r3) */
/* 0x805303b8: 7c 09 03 a6              mtctr    r0 */
/* 0x805303bc: 55 8a 06 3e              clrlwi   r10, r12, 0x18 */
/* 0x805303c0: 38 0c 00 02              addi     r0, r12, 2 */
/* 0x805303c4: 1c aa 00 f0              mulli    r5, r10, 0xf0 */
/* 0x805303c8: 38 8c 00 01              addi     r4, r12, 1 */
/* 0x805303cc: 54 07 06 3e              clrlwi   r7, r0, 0x18 */
/* 0x805303d0: 38 0c 00 03              addi     r0, r12, 3 */
/* 0x805303d4: 7d 23 2a 14              add      r9, r3, r5 */
/* 0x805303d8: 54 88 06 3e              clrlwi   r8, r4, 0x18 */
/* 0x805303dc: b1 69 00 e0              sth      r11, 0xe0(r9) */
/* 0x805303e0: 54 06 06 3e              clrlwi   r6, r0, 0x18 */
/* 0x805303e4: 38 8c 00 04              addi     r4, r12, 4 */
/* 0x805303e8: 38 0c 00 05              addi     r0, r12, 5 */
/* 0x805303ec: b1 69 00 e6              sth      r11, 0xe6(r9) */
/* 0x805303f0: 54 85 06 3e              clrlwi   r5, r4, 0x18 */
/* 0x805303f4: 39 4a 00 01              addi     r10, r10, 1 */
/* 0x805303f8: 54 04 06 3e              clrlwi   r4, r0, 0x18 */
/* 0x805303fc: 99 49 00 e9              stb      r10, 0xe9(r9) */
/* 0x80530400: 38 08 00 01              addi     r0, r8, 1 */
/* 0x80530404: 38 e7 00 01              addi     r7, r7, 1 */
/* 0x80530408: 38 c6 00 01              addi     r6, r6, 1 */
/* 0x8053040c: 99 49 00 e8              stb      r10, 0xe8(r9) */
/* 0x80530410: 38 a5 00 01              addi     r5, r5, 1 */
/* 0x80530414: 38 84 00 01              addi     r4, r4, 1 */
/* 0x80530418: 39 8c 00 06              addi     r12, r12, 6 */
/* 0x8053041c: b1 69 01 d0              sth      r11, 0x1d0(r9) */
/* 0x80530420: b1 69 01 d6              sth      r11, 0x1d6(r9) */
/* 0x80530424: 98 09 01 d9              stb      r0, 0x1d9(r9) */
/* 0x80530428: 98 09 01 d8              stb      r0, 0x1d8(r9) */
/* 0x8053042c: b1 69 02 c0              sth      r11, 0x2c0(r9) */
/* 0x80530430: b1 69 02 c6              sth      r11, 0x2c6(r9) */
/* 0x80530434: 98 e9 02 c9              stb      r7, 0x2c9(r9) */
/* 0x80530438: 98 e9 02 c8              stb      r7, 0x2c8(r9) */
/* 0x8053043c: b1 69 03 b0              sth      r11, 0x3b0(r9) */
/* 0x80530440: b1 69 03 b6              sth      r11, 0x3b6(r9) */
/* 0x80530444: 98 c9 03 b9              stb      r6, 0x3b9(r9) */
/* 0x80530448: 98 c9 03 b8              stb      r6, 0x3b8(r9) */
/* 0x8053044c: b1 69 04 a0              sth      r11, 0x4a0(r9) */
/* 0x80530450: b1 69 04 a6              sth      r11, 0x4a6(r9) */
/* 0x80530454: 98 a9 04 a9              stb      r5, 0x4a9(r9) */
/* 0x80530458: 98 a9 04 a8              stb      r5, 0x4a8(r9) */
/* 0x8053045c: b1 69 05 90              sth      r11, 0x590(r9) */
/* 0x80530460: b1 69 05 96              sth      r11, 0x596(r9) */
/* 0x80530464: 98 89 05 99              stb      r4, 0x599(r9) */
/* 0x80530468: 98 89 05 98              stb      r4, 0x598(r9) */
/* 0x8053046c: 42 00 ff 50              bdnz     0x805303bc */
/* 0x80530470: 38 80 00 00              li       r4, 0 */
/* 0x80530474: 38 00 00 03              li       r0, 3 */
/* 0x80530478: 98 83 0b 6c              stb      r4, 0xb6c(r3) */
/* 0x8053047c: 98 03 0b 6d              stb      r0, 0xb6d(r3) */
/* 0x80530480: 4e 80 00 20              blr       */
/* 0x80530484: 4e 80 00 20              blr       */
/* 0x80530488: 4e 80 00 20              blr       */
/* 0x8053048c: 4e 80 00 20              blr       */
/* 0x80530490: 88 83 0b 6c              lbz      r4, 0xb6c(r3) */
/* 0x80530494: 28 04 00 64              cmplwi   r4, 0x64 */
/* 0x80530498: 40 80 00 10              bge      0x805304a8 */
/* 0x8053049c: 38 04 00 01              addi     r0, r4, 1 */
/* 0x805304a0: 98 03 0b 6c              stb      r0, 0xb6c(r3) */
/* 0x805304a4: 48 00 00 0c              b        0x805304b0 */
/* 0x805304a8: 38 00 00 00              li       r0, 0 */
/* 0x805304ac: 98 03 0b 6c              stb      r0, 0xb6c(r3) */
/* 0x805304b0: 38 c0 00 00              li       r6, 0 */
/* 0x805304b4: 1c a6 00 f0              mulli    r5, r6, 0xf0 */
/* 0x805304b8: 38 c0 00 06              li       r6, 6 */
/* 0x805304bc: 7c 83 2a 14              add      r4, r3, r5 */
/* 0x805304c0: 88 04 00 ea              lbz      r0, 0xea(r4) */
/* 0x805304c4: 1c a6 00 f0              mulli    r5, r6, 0xf0 */
/* 0x805304c8: 98 04 00 e9              stb      r0, 0xe9(r4) */
/* 0x805304cc: a0 04 00 e2              lhz      r0, 0xe2(r4) */
/* 0x805304d0: b0 04 00 e0              sth      r0, 0xe0(r4) */
/* 0x805304d4: 88 04 01 da              lbz      r0, 0x1da(r4) */
/* 0x805304d8: 98 04 01 d9              stb      r0, 0x1d9(r4) */
/* 0x805304dc: a0 04 01 d2              lhz      r0, 0x1d2(r4) */
/* 0x805304e0: b0 04 01 d0              sth      r0, 0x1d0(r4) */
/* 0x805304e4: 88 04 02 ca              lbz      r0, 0x2ca(r4) */
/* 0x805304e8: 98 04 02 c9              stb      r0, 0x2c9(r4) */
/* 0x805304ec: a0 04 02 c2              lhz      r0, 0x2c2(r4) */
/* 0x805304f0: b0 04 02 c0              sth      r0, 0x2c0(r4) */
/* 0x805304f4: 88 04 03 ba              lbz      r0, 0x3ba(r4) */
/* 0x805304f8: 98 04 03 b9              stb      r0, 0x3b9(r4) */
/* 0x805304fc: a0 04 03 b2              lhz      r0, 0x3b2(r4) */
/* 0x80530500: b0 04 03 b0              sth      r0, 0x3b0(r4) */
/* 0x80530504: 88 04 04 aa              lbz      r0, 0x4aa(r4) */
/* 0x80530508: 98 04 04 a9              stb      r0, 0x4a9(r4) */
/* 0x8053050c: a0 04 04 a2              lhz      r0, 0x4a2(r4) */
/* 0x80530510: b0 04 04 a0              sth      r0, 0x4a0(r4) */
/* 0x80530514: 88 04 05 9a              lbz      r0, 0x59a(r4) */
/* 0x80530518: 98 04 05 99              stb      r0, 0x599(r4) */
/* 0x8053051c: a0 04 05 92              lhz      r0, 0x592(r4) */
/* 0x80530520: b0 04 05 90              sth      r0, 0x590(r4) */
/* 0x80530524: 7c 83 2a 14              add      r4, r3, r5 */
/* 0x80530528: 88 04 00 ea              lbz      r0, 0xea(r4) */
/* 0x8053052c: 98 04 00 e9              stb      r0, 0xe9(r4) */
/* 0x80530530: a0 04 00 e2              lhz      r0, 0xe2(r4) */
/* 0x80530534: b0 04 00 e0              sth      r0, 0xe0(r4) */
/* 0x80530538: 88 04 01 da              lbz      r0, 0x1da(r4) */
/* 0x8053053c: 98 04 01 d9              stb      r0, 0x1d9(r4) */
/* 0x80530540: a0 04 01 d2              lhz      r0, 0x1d2(r4) */
/* 0x80530544: b0 04 01 d0              sth      r0, 0x1d0(r4) */
/* 0x80530548: 88 04 02 ca              lbz      r0, 0x2ca(r4) */
/* 0x8053054c: 98 04 02 c9              stb      r0, 0x2c9(r4) */
/* 0x80530550: a0 04 02 c2              lhz      r0, 0x2c2(r4) */
/* 0x80530554: b0 04 02 c0              sth      r0, 0x2c0(r4) */
/* 0x80530558: 88 04 03 ba              lbz      r0, 0x3ba(r4) */
/* 0x8053055c: 98 04 03 b9              stb      r0, 0x3b9(r4) */
/* 0x80530560: a0 04 03 b2              lhz      r0, 0x3b2(r4) */
/* 0x80530564: b0 04 03 b0              sth      r0, 0x3b0(r4) */
/* 0x80530568: 88 04 04 aa              lbz      r0, 0x4aa(r4) */
/* 0x8053056c: 98 04 04 a9              stb      r0, 0x4a9(r4) */
/* 0x80530570: a0 04 04 a2              lhz      r0, 0x4a2(r4) */
/* 0x80530574: b0 04 04 a0              sth      r0, 0x4a0(r4) */
/* 0x80530578: 88 04 05 9a              lbz      r0, 0x59a(r4) */
/* 0x8053057c: 98 04 05 99              stb      r0, 0x599(r4) */
/* 0x80530580: a0 04 05 92              lhz      r0, 0x592(r4) */
/* 0x80530584: b0 04 05 90              sth      r0, 0x590(r4) */
/* 0x80530588: 88 63 0b 6c              lbz      r3, 0xb6c(r3) */
/* 0x8053058c: 4e 80 00 20              blr       */
/* 0x80530590: 94 21 ff b0              stwu     r1, -0x50(r1) */
/* 0x80530594: 7c 08 02 a6              mflr     r0 */
/* 0x80530598: 90 01 00 54              stw      r0, 0x54(r1) */
/* 0x8053059c: db e1 00 40              stfd     f31, 0x40(r1) */
/* 0x805305a0: f3 e1 00 48              xsmaddmsp f31, f1, f0 */
/* 0x805305a4: db c1 00 30              stfd     f30, 0x30(r1) */
/* 0x805305a8: f3 c1 00 38              xxsel    vs30, vs1, vs0, v0 */
/* 0x805305ac: 39 61 00 30              addi     r11, r1, 0x30 */
/* 0x805305b0: 48 02 56 49              bl       0x80555bf8 */
/* 0x805305b4: 3f a0 00 00              lis      r29, 0 */
/* 0x805305b8: 3c a0 00 00              lis      r5, 0 */
/* 0x805305bc: 80 dd 00 00              lwz      r6, 0(r29) */
/* 0x805305c0: 3c 60 00 00              lis      r3, 0 */
/* 0x805305c4: 1f 84 00 f0              mulli    r28, r4, 0xf0 */
/* 0x805305c8: c3 c5 00 00              lfs      f30, 0(r5) */
/* 0x805305cc: 8b c6 00 24              lbz      r30, 0x24(r6) */
/* 0x805305d0: 7c 9a 23 78              mr       r26, r4 */
/* 0x805305d4: cb e3 00 00              lfd      f31, 0(r3) */
/* 0x805305d8: 3b 60 00 00              li       r27, 0 */
/* 0x805305dc: 3f e0 43 30              lis      r31, 0x4330 */
/* 0x805305e0: 48 00 00 50              b        0x80530630 */
/* 0x805305e4: 57 60 06 3e              clrlwi   r0, r27, 0x18 */
/* 0x805305e8: 7c 1a 00 40              cmplw    r26, r0 */
/* 0x805305ec: 41 82 00 40              beq      0x8053062c */
/* 0x805305f0: 80 7d 00 00              lwz      r3, 0(r29) */
/* 0x805305f4: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x805305f8: 38 83 00 28              addi     r4, r3, 0x28 */
/* 0x805305fc: 7c 64 e2 14              add      r3, r4, r28 */
/* 0x80530600: 7c 84 02 14              add      r4, r4, r0 */
/* 0x80530604: 38 84 00 e4              addi     r4, r4, 0xe4 */
/* 0x80530608: 38 63 00 e4              addi     r3, r3, 0xe4 */
/* 0x8053060c: 4b ff ef a9              bl       0x8052f5b4 */
/* 0x80530610: 7c 60 07 34              extsh    r0, r3 */
/* 0x80530614: 93 e1 00 08              stw      r31, 8(r1) */
/* 0x80530618: 6c 00 80 00              xoris    r0, r0, 0x8000 */
/* 0x8053061c: 90 01 00 0c              stw      r0, 0xc(r1) */
/* 0x80530620: c8 01 00 08              lfd      f0, 8(r1) */
/* 0x80530624: ec 00 f8 28              fsubs    f0, f0, f31 */
/* 0x80530628: ef de 00 2a              fadds    f30, f30, f0 */
/* 0x8053062c: 3b 7b 00 01              addi     r27, r27, 1 */
/* 0x80530630: 57 60 06 3e              clrlwi   r0, r27, 0x18 */
/* 0x80530634: 7c 00 f0 40              cmplw    r0, r30 */
/* 0x80530638: 41 80 ff ac              blt      0x805305e4 */
/* 0x8053063c: fc 00 f0 1e              fctiwz   f0, f30 */
/* 0x80530640: d8 01 00 08              stfd     f0, 8(r1) */
/* 0x80530644: 80 61 00 0c              lwz      r3, 0xc(r1) */
#endif


/* === DISASSEMBLY === */

; Function: init__Q26System10RaceConfigFv
; Demangled: init__System10RaceConfigFv
; Address: 0x80530228  (.text+0x1d98c)
; Size: 1772 bytes

  0x80530228:  sth      r11, 0xfc0(r9)
  0x8053022c:  sth      r11, 0xfc6(r9)
  0x80530230:  stb      r6, 0xfc9(r9)
  0x80530234:  stb      r6, 0xfc8(r9)
  0x80530238:  sth      r11, 0x10b0(r9)
  0x8053023c:  sth      r11, 0x10b6(r9)
  0x80530240:  stb      r5, 0x10b9(r9)
  0x80530244:  stb      r5, 0x10b8(r9)
  0x80530248:  sth      r11, 0x11a0(r9)
  0x8053024c:  sth      r11, 0x11a6(r9)
  0x80530250:  stb      r4, 0x11a9(r9)
  0x80530254:  stb      r4, 0x11a8(r9)
  0x80530258:  bdnz     0x805301a8
  0x8053025c:  lwz      r4, 0x2370(r3)
  0x80530260:  li       r11, 0
  0x80530264:  li       r0, 2
  0x80530268:  li       r6, 3
  0x8053026c:  li       r5, 1
  0x80530270:  rlwinm   r4, r4, 0, 0, 0x1c
  0x80530274:  stb      r11, 0x177c(r3)
  0x80530278:  li       r12, 0
  0x8053027c:  stb      r6, 0x177d(r3)
  0x80530280:  stw      r11, 0x2360(r3)
  0x80530284:  stw      r5, 0x235c(r3)
  0x80530288:  stb      r6, 0x236d(r3)
  0x8053028c:  stw      r5, 0x234c(r3)
  0x80530290:  stw      r4, 0x2370(r3)
  0x80530294:  mtctr    r0
  0x80530298:  clrlwi   r10, r12, 0x18
  0x8053029c:  addi     r0, r12, 2
  0x805302a0:  mulli    r5, r10, 0xf0
  0x805302a4:  addi     r4, r12, 1
  0x805302a8:  clrlwi   r7, r0, 0x18
  0x805302ac:  addi     r0, r12, 3
  0x805302b0:  add      r9, r3, r5
  0x805302b4:  clrlwi   r8, r4, 0x18
  0x805302b8:  sth      r11, 0x18e0(r9)
  0x805302bc:  clrlwi   r6, r0, 0x18
  0x805302c0:  addi     r4, r12, 4
  0x805302c4:  addi     r0, r12, 5
  0x805302c8:  sth      r11, 0x18e6(r9)
  0x805302cc:  clrlwi   r5, r4, 0x18
  0x805302d0:  addi     r10, r10, 1
  0x805302d4:  clrlwi   r4, r0, 0x18
  0x805302d8:  stb      r10, 0x18e9(r9)
  0x805302dc:  addi     r0, r8, 1
  0x805302e0:  addi     r7, r7, 1
  0x805302e4:  addi     r6, r6, 1
  0x805302e8:  stb      r10, 0x18e8(r9)
  0x805302ec:  addi     r5, r5, 1
  0x805302f0:  addi     r4, r4, 1
  0x805302f4:  addi     r12, r12, 6
  0x805302f8:  sth      r11, 0x19d0(r9)
  0x805302fc:  sth      r11, 0x19d6(r9)
  0x80530300:  stb      r0, 0x19d9(r9)
  0x80530304:  stb      r0, 0x19d8(r9)
  0x80530308:  sth      r11, 0x1ac0(r9)
  0x8053030c:  sth      r11, 0x1ac6(r9)
  0x80530310:  stb      r7, 0x1ac9(r9)
  0x80530314:  stb      r7, 0x1ac8(r9)
  0x80530318:  sth      r11, 0x1bb0(r9)
  0x8053031c:  sth      r11, 0x1bb6(r9)
  0x80530320:  stb      r6, 0x1bb9(r9)
  0x80530324:  stb      r6, 0x1bb8(r9)
  0x80530328:  sth      r11, 0x1ca0(r9)
  0x8053032c:  sth      r11, 0x1ca6(r9)
  0x80530330:  stb      r5, 0x1ca9(r9)
  0x80530334:  stb      r5, 0x1ca8(r9)
  0x80530338:  sth      r11, 0x1d90(r9)
  0x8053033c:  sth      r11, 0x1d96(r9)
  0x80530340:  stb      r4, 0x1d99(r9)
  0x80530344:  stb      r4, 0x1d98(r9)
  0x80530348:  bdnz     0x80530298
  0x8053034c:  li       r4, 0
  0x80530350:  li       r0, 3
  0x80530354:  stb      r4, 0x236c(r3)
  0x80530358:  stb      r0, 0x236d(r3)
  0x8053035c:  blr      
  0x80530360:  li       r0, 0
  0x80530364:  sth      r0, 0xd8(r3)
  0x80530368:  sth      r0, 0xde(r3)
  0x8053036c:  stb      r4, 0xe1(r3)
  0x80530370:  stb      r4, 0xe0(r3)
  0x80530374:  blr      
  0x80530378:  stb      r4, 0xe1(r3)
  0x8053037c:  blr      
  0x80530380:  stb      r4, 0xe0(r3)
  0x80530384:  blr      
  0x80530388:  lwz      r4, 0xb70(r3)
  0x8053038c:  li       r6, 1
  0x80530390:  li       r0, 2
  0x80530394:  li       r11, 0
  0x80530398:  rlwinm   r4, r4, 0, 0, 0x1c
  0x8053039c:  li       r5, 3
  0x805303a0:  stw      r11, 0xb60(r3)
  0x805303a4:  li       r12, 0
  0x805303a8:  stw      r6, 0xb5c(r3)
  0x805303ac:  stb      r5, 0xb6d(r3)
  0x805303b0:  stw      r6, 0xb4c(r3)
  0x805303b4:  stw      r4, 0xb70(r3)
  0x805303b8:  mtctr    r0
  0x805303bc:  clrlwi   r10, r12, 0x18
  0x805303c0:  addi     r0, r12, 2
  0x805303c4:  mulli    r5, r10, 0xf0
  0x805303c8:  addi     r4, r12, 1
  0x805303cc:  clrlwi   r7, r0, 0x18
  0x805303d0:  addi     r0, r12, 3
  0x805303d4:  add      r9, r3, r5
  0x805303d8:  clrlwi   r8, r4, 0x18
  0x805303dc:  sth      r11, 0xe0(r9)
  0x805303e0:  clrlwi   r6, r0, 0x18
  0x805303e4:  addi     r4, r12, 4
  0x805303e8:  addi     r0, r12, 5
  0x805303ec:  sth      r11, 0xe6(r9)
  0x805303f0:  clrlwi   r5, r4, 0x18
  0x805303f4:  addi     r10, r10, 1
  0x805303f8:  clrlwi   r4, r0, 0x18
  0x805303fc:  stb      r10, 0xe9(r9)
  0x80530400:  addi     r0, r8, 1
  0x80530404:  addi     r7, r7, 1
  0x80530408:  addi     r6, r6, 1
  0x8053040c:  stb      r10, 0xe8(r9)
  0x80530410:  addi     r5, r5, 1
  0x80530414:  addi     r4, r4, 1
  0x80530418:  addi     r12, r12, 6
  0x8053041c:  sth      r11, 0x1d0(r9)
  0x80530420:  sth      r11, 0x1d6(r9)
  0x80530424:  stb      r0, 0x1d9(r9)
  0x80530428:  stb      r0, 0x1d8(r9)
  0x8053042c:  sth      r11, 0x2c0(r9)
  0x80530430:  sth      r11, 0x2c6(r9)
  0x80530434:  stb      r7, 0x2c9(r9)
  0x80530438:  stb      r7, 0x2c8(r9)
  0x8053043c:  sth      r11, 0x3b0(r9)
  0x80530440:  sth      r11, 0x3b6(r9)
  0x80530444:  stb      r6, 0x3b9(r9)
  0x80530448:  stb      r6, 0x3b8(r9)
  0x8053044c:  sth      r11, 0x4a0(r9)
  0x80530450:  sth      r11, 0x4a6(r9)
  0x80530454:  stb      r5, 0x4a9(r9)
  0x80530458:  stb      r5, 0x4a8(r9)
  0x8053045c:  sth      r11, 0x590(r9)
  0x80530460:  sth      r11, 0x596(r9)
  0x80530464:  stb      r4, 0x599(r9)
  0x80530468:  stb      r4, 0x598(r9)
  0x8053046c:  bdnz     0x805303bc
  0x80530470:  li       r4, 0
  0x80530474:  li       r0, 3
  0x80530478:  stb      r4, 0xb6c(r3)
  0x8053047c:  stb      r0, 0xb6d(r3)
  0x80530480:  blr      
  0x80530484:  blr      
  0x80530488:  blr      
  0x8053048c:  blr      
  0x80530490:  lbz      r4, 0xb6c(r3)
  0x80530494:  cmplwi   r4, 0x64
  0x80530498:  bge      0x805304a8
  0x8053049c:  addi     r0, r4, 1
  0x805304a0:  stb      r0, 0xb6c(r3)
  0x805304a4:  b        0x805304b0
  0x805304a8:  li       r0, 0
  0x805304ac:  stb      r0, 0xb6c(r3)
  0x805304b0:  li       r6, 0
  0x805304b4:  mulli    r5, r6, 0xf0
  0x805304b8:  li       r6, 6
  0x805304bc:  add      r4, r3, r5
  0x805304c0:  lbz      r0, 0xea(r4)
  0x805304c4:  mulli    r5, r6, 0xf0
  0x805304c8:  stb      r0, 0xe9(r4)
  0x805304cc:  lhz      r0, 0xe2(r4)
  0x805304d0:  sth      r0, 0xe0(r4)
  0x805304d4:  lbz      r0, 0x1da(r4)
  0x805304d8:  stb      r0, 0x1d9(r4)
  0x805304dc:  lhz      r0, 0x1d2(r4)
  0x805304e0:  sth      r0, 0x1d0(r4)
  0x805304e4:  lbz      r0, 0x2ca(r4)
  0x805304e8:  stb      r0, 0x2c9(r4)
  0x805304ec:  lhz      r0, 0x2c2(r4)
  0x805304f0:  sth      r0, 0x2c0(r4)
  0x805304f4:  lbz      r0, 0x3ba(r4)
  0x805304f8:  stb      r0, 0x3b9(r4)
  0x805304fc:  lhz      r0, 0x3b2(r4)
  0x80530500:  sth      r0, 0x3b0(r4)
  0x80530504:  lbz      r0, 0x4aa(r4)
  0x80530508:  stb      r0, 0x4a9(r4)
  0x8053050c:  lhz      r0, 0x4a2(r4)
  0x80530510:  sth      r0, 0x4a0(r4)
  0x80530514:  lbz      r0, 0x59a(r4)
  0x80530518:  stb      r0, 0x599(r4)
  0x8053051c:  lhz      r0, 0x592(r4)
  0x80530520:  sth      r0, 0x590(r4)
  0x80530524:  add      r4, r3, r5
  0x80530528:  lbz      r0, 0xea(r4)
  0x8053052c:  stb      r0, 0xe9(r4)
  0x80530530:  lhz      r0, 0xe2(r4)
  0x80530534:  sth      r0, 0xe0(r4)
  0x80530538:  lbz      r0, 0x1da(r4)
  0x8053053c:  stb      r0, 0x1d9(r4)
  0x80530540:  lhz      r0, 0x1d2(r4)
  0x80530544:  sth      r0, 0x1d0(r4)
  0x80530548:  lbz      r0, 0x2ca(r4)
  0x8053054c:  stb      r0, 0x2c9(r4)
  0x80530550:  lhz      r0, 0x2c2(r4)
  0x80530554:  sth      r0, 0x2c0(r4)
  0x80530558:  lbz      r0, 0x3ba(r4)
  0x8053055c:  stb      r0, 0x3b9(r4)
  0x80530560:  lhz      r0, 0x3b2(r4)
  0x80530564:  sth      r0, 0x3b0(r4)
  0x80530568:  lbz      r0, 0x4aa(r4)
  0x8053056c:  stb      r0, 0x4a9(r4)
  0x80530570:  lhz      r0, 0x4a2(r4)
  0x80530574:  sth      r0, 0x4a0(r4)
  0x80530578:  lbz      r0, 0x59a(r4)
  0x8053057c:  stb      r0, 0x599(r4)
  0x80530580:  lhz      r0, 0x592(r4)
  0x80530584:  sth      r0, 0x590(r4)
  0x80530588:  lbz      r3, 0xb6c(r3)
  0x8053058c:  blr      
  0x80530590:  stwu     r1, -0x50(r1)
  0x80530594:  mflr     r0
  0x80530598:  stw      r0, 0x54(r1)
  0x8053059c:  stfd     f31, 0x40(r1)
  0x805305a0:  xsmaddmsp f31, f1, f0
  0x805305a4:  stfd     f30, 0x30(r1)
  0x805305a8:  xxsel    vs30, vs1, vs0, v0
  0x805305ac:  addi     r11, r1, 0x30
  0x805305b0:  bl       0x80555bf8
  0x805305b4:  lis      r29, 0
  0x805305b8:  lis      r5, 0
  0x805305bc:  lwz      r6, 0(r29)
  0x805305c0:  lis      r3, 0
  0x805305c4:  mulli    r28, r4, 0xf0
  0x805305c8:  lfs      f30, 0(r5)
  0x805305cc:  lbz      r30, 0x24(r6)
  0x805305d0:  mr       r26, r4
  0x805305d4:  lfd      f31, 0(r3)
  0x805305d8:  li       r27, 0
  0x805305dc:  lis      r31, 0x4330
  0x805305e0:  b        0x80530630
  0x805305e4:  clrlwi   r0, r27, 0x18
  0x805305e8:  cmplw    r26, r0
  0x805305ec:  beq      0x8053062c
  0x805305f0:  lwz      r3, 0(r29)
  0x805305f4:  mulli    r0, r0, 0xf0
  0x805305f8:  addi     r4, r3, 0x28
  0x805305fc:  add      r3, r4, r28
  0x80530600:  add      r4, r4, r0
  0x80530604:  addi     r4, r4, 0xe4
  0x80530608:  addi     r3, r3, 0xe4
  0x8053060c:  bl       0x8052f5b4
  0x80530610:  extsh    r0, r3
  0x80530614:  stw      r31, 8(r1)
  0x80530618:  xoris    r0, r0, 0x8000
  0x8053061c:  stw      r0, 0xc(r1)
  0x80530620:  lfd      f0, 8(r1)
  0x80530624:  fsubs    f0, f0, f31
  0x80530628:  fadds    f30, f30, f0
  0x8053062c:  addi     r27, r27, 1
  0x80530630:  clrlwi   r0, r27, 0x18
  0x80530634:  cmplw    r0, r30
  0x80530638:  blt      0x805305e4
  0x8053063c:  fctiwz   f0, f30
  0x80530640:  stfd     f0, 8(r1)
  0x80530644:  lwz      r3, 0xc(r1)
