using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace MvcMusicStore.Models
{
    public class MusicStoreDbInitializer
        :System.Data.Entity.DropCreateDatabaseAlways<MusicStoreDB>
    {
        protected override void Seed(MusicStoreDB context)
        {
            context.Artists.Add(new Artist { Name = "Hugh Masekela" });
            context.Genres.Add(new Genre { Name = "Jazz" });
            context.Albums.Add(new Album
            {
                Artist = new Artist { Name = "Mdu" },
                Genre = new Genre { Name = "Kawito" },
                Price = 9.99m,
                Title = "Mazola"
            });



            base.Seed(context);
        }
        }
    }
