import { useState } from "react";
import { useSelector, useDispatch } from "react-redux";
import { addNote } from "../../redux/actions/noteActions";
import "./NoteForm.css";

function NoteForm({ onCreateNote }) {
  const [NoteText, setNoteText] = useState("");
  const  dispatch = useDispatch();

  const handleSubmit = (e) => {
    e.preventDefault();
    // onCreateNote(NoteText);
    dispatch(addNote(NoteText))
    setNoteText("");
  };

  return (
    <div className="container">
      
    <form onSubmit={handleSubmit}>
      <textarea
        type="text"
        className="form-control mb-3"
        value={NoteText}
        onChange={(e) => setNoteText(e.target.value)}
        required
      />
      <button className="btn btn-success float-end" type="submit">Create Note</button>
    </form>
    </div>
  );
}

export default NoteForm;
