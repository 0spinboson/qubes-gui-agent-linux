#ifndef fooplaymemblockqhfoo
#define fooplaymemblockqhfoo

/***
  This file is part of PulseAudio.

  Copyright 2006 Lennart Poettering

  PulseAudio is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published
  by the Free Software Foundation; either version 2.1 of the License,
  or (at your option) any later version.

  PulseAudio is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with PulseAudio; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  USA.
***/

#include <pulsecore/sink.h>
#include <pulsecore/memblockq.h>

pa_sink_input* pa_memblockq_sink_input_new(
        pa_sink *sink,
        const pa_sample_spec *ss,
        const pa_channel_map *map,
        pa_memblockq *q,
        pa_cvolume *volume,
        pa_proplist *p,
        pa_sink_input_flags_t flags);

void pa_memblockq_sink_input_set_queue(pa_sink_input *i, pa_memblockq *q);

int pa_play_memblockq(
        pa_sink *sink,
        const pa_sample_spec *ss,
        const pa_channel_map *map,
        pa_memblockq *q,
        pa_cvolume *cvolume,
        pa_proplist *p,
        pa_sink_input_flags_t flags,
        uint32_t *sink_input_index);

#endif
